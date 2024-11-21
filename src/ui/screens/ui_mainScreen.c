// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_mainScreen_screen_init(void)
{
    ui_mainScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_mainScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_mainScreen, &ui_img_mainscreen_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_title = lv_label_create(ui_mainScreen);
    lv_obj_set_width(ui_title, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_title, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_title, 0);
    lv_obj_set_y(ui_title, -191);
    lv_obj_set_align(ui_title, LV_ALIGN_CENTER);
    lv_label_set_text(ui_title, "Chat via Bluetooth");
    lv_obj_set_style_text_color(ui_title, lv_color_hex(0xDE7908), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_title, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_title, &ui_font_arialrounded45, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_userMessage = lv_textarea_create(ui_mainScreen);
    lv_obj_set_width(ui_userMessage, 490);
    lv_obj_set_height(ui_userMessage, 74);
    lv_obj_set_x(ui_userMessage, -100);
    lv_obj_set_y(ui_userMessage, 173);
    lv_obj_set_align(ui_userMessage, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_userMessage, "Enter message here...");
    lv_obj_set_style_text_font(ui_userMessage, &ui_font_arialrounded28, LV_PART_MAIN | LV_STATE_DEFAULT);



    ui_btnSend = lv_btn_create(ui_mainScreen);
    lv_obj_set_width(ui_btnSend, 177);
    lv_obj_set_height(ui_btnSend, 74);
    lv_obj_set_x(ui_btnSend, 257);
    lv_obj_set_y(ui_btnSend, 172);
    lv_obj_set_align(ui_btnSend, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnSend, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnSend, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnSend, lv_color_hex(0xDF790C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnSend, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblSend = lv_label_create(ui_btnSend);
    lv_obj_set_width(ui_lblSend, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSend, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblSend, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSend, "SEND");
    lv_obj_set_style_text_font(ui_lblSend, &ui_font_arialrounded28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_keyboard = lv_keyboard_create(ui_mainScreen);
    lv_obj_set_width(ui_keyboard, 769);
    lv_obj_set_height(ui_keyboard, 173);
    lv_obj_set_x(ui_keyboard, 0);
    lv_obj_set_y(ui_keyboard, 327);
    lv_obj_set_align(ui_keyboard, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_keyboard, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_keyboard, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_keyboard, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_mainPanel = lv_obj_create(ui_mainScreen);
    lv_obj_remove_style_all(ui_mainPanel);
    lv_obj_set_width(ui_mainPanel, 687);
    lv_obj_set_height(ui_mainPanel, 255);
    lv_obj_set_x(ui_mainPanel, 0);
    lv_obj_set_y(ui_mainPanel, 91);
    lv_obj_set_align(ui_mainPanel, LV_ALIGN_TOP_MID);
    lv_obj_set_style_radius(ui_mainPanel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_mainPanel, lv_color_hex(0x2A2929), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mainPanel, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_mainPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_mainPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_mainPanel, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_mainPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnClear = lv_btn_create(ui_mainPanel);
    lv_obj_set_width(ui_btnClear, 127);
    lv_obj_set_height(ui_btnClear, 50);
    lv_obj_set_x(ui_btnClear, -15);
    lv_obj_set_y(ui_btnClear, -18);
    lv_obj_set_align(ui_btnClear, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_btnClear, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnClear, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnClear, lv_color_hex(0xDE7908), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnClear, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblClear = lv_label_create(ui_btnClear);
    lv_obj_set_width(ui_lblClear, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblClear, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblClear, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblClear, "CLEAR\nHISTORY");
    lv_obj_set_style_text_align(ui_lblClear, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblClear, &ui_font_arialrounded20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_conversation = lv_label_create(ui_mainPanel);
    lv_obj_set_width(ui_conversation, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_conversation, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_conversation, 15);
    lv_obj_set_y(ui_conversation, -18);
    lv_obj_set_align(ui_conversation, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_conversation, ">");
    lv_obj_set_scrollbar_mode(ui_conversation, LV_SCROLLBAR_MODE_ON);
    lv_obj_set_scroll_dir(ui_conversation, LV_DIR_VER);
    lv_obj_set_style_text_color(ui_conversation, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_conversation, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_conversation, &ui_font_arialrounded20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_userMessage, ui_event_userMessage, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnSend, ui_event_btnSend, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_keyboard, ui_userMessage);
    lv_obj_add_event_cb(ui_btnClear, ui_event_btnClear, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_mainPanel, ui_event_mainPanel, LV_EVENT_ALL, NULL);

}
