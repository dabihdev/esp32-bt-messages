// ESP32 BT MESSAGES =========================================================================================
// AUTHOR: @dabihdev (2024)
// Mimicks a chat application on ESP32, allowing to send messages to a smartphone using a BT serial
// application. To be more specific, this firmware uses BLE (Bluetooth Low Energy) to communicate with
// other devices.
// =====================================================================================================

#include <Arduino.h> // import Arduino framework
#include <esp32_smartdisplay.h> // import ESP32 library
#include <ui/ui.h> // import UI
#include <BLESerial.h> // import BLE serial library
#include <cstdlib> // c++ library for random number generation
using std::string; // use c++ strings

// Run this block to check if Bluetooth is present on device
#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled!
#endif

// GLOBAL VARIABLES=====================================================================================

BLESerial<> SerialBLE;                         // initialize BLE serial object

String incomingMessage = "";                   // incoming message from smartphone
String sentMessage = "";                       // message sended by esp32 user
String conversationHistory = "";               // conversation history
bool messageHasArrived = false;                // flag the program whether a newline character was read from the incoming message

// =====================================================================================================

// FUNCTIONS ===========================================================================================

// Read message from smartphone
void read_message_from_smartphone()
{
    char incomingChar = SerialBLE.read(); // store incoming char
    if(incomingChar=='\n') // if end-of-message character is read
    {
        messageHasArrived = true;
    }
    else // else if another character is read
    {
        incomingMessage += incomingChar; // put incoming byte into string
    }
}

// Display incoming message on screen
void display_incoming_message_on_screen()
{
    // Add author to message
    String author = "[Smartphone]> ";
    incomingMessage = author + incomingMessage;

    // add message to conversation history
    conversationHistory += incomingMessage; 

    // transform string to char array
    char *txt = &conversationHistory[0];

    // update conversation on screen
    lv_label_set_text(ui_conversation, txt);
}

// Display sended message on screen
void display_sent_message_on_screen()
{
    // Add author to message
    String author = "[You]> ";
    sentMessage = author + sentMessage;

    // add sent message to conversation history
    conversationHistory += sentMessage; 

    // transform string to char array
    char *txt = &conversationHistory[0];
    
    // update conversation on screen
    lv_label_set_text(ui_conversation, txt);
}

// When "SEND" button is clicked, send user message to smartphone
void send_message_to_smartphone(lv_event_t * e)
{
	// get user message from text input
    sentMessage += String(lv_textarea_get_text(ui_userMessage));
    if(sentMessage!="") // if text input not empty
    {
        sentMessage += "\n"; // add 'newline' character to end message

        // send message to smartphone
        SerialBLE.print(sentMessage);
        SerialBLE.flush(); // without this, it won't work!

        // update conversation
        display_sent_message_on_screen();

        // clear sent message
        sentMessage = "";

        // clear text input
        lv_textarea_set_text(ui_userMessage, "");
    }
}

// Clear conversation history
void clear_conversation_history(lv_event_t * e)
{
	conversationHistory = ""; // clear conversation history
    lv_label_set_text(ui_conversation, ">"); // clear screen
}


void setup()
{   
    // Initialize serial connections
    Serial.begin(115200);
    SerialBLE.begin("ESP32-8048S070C");

    // Initialize display
    smartdisplay_init();
    smartdisplay_lcd_set_backlight(1.0); // set initial backlight

    // Set display rotation
    __attribute__((unused)) auto disp = lv_disp_get_default();
    // lv_disp_set_rotation(disp, LV_DISP_ROT_180);

    // Initialize UI
    ui_init();
}


void loop()
{
    // Read message from smartphone
    if(SerialBLE.available())
    {
        read_message_from_smartphone();
    }

    // If message has arrived...
    if(messageHasArrived)
    {
        // display message on screen
        display_incoming_message_on_screen();

        // go back to listen to new messages
        messageHasArrived = false;

        // clear incoming message
        incomingMessage = "";    
    }

    // LVGL timer handler (do not touch)
    lv_timer_handler();
}