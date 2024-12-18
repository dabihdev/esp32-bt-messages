// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "..\..\.pio\libdeps\esp32-8048S070C\lvgl\lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
void enterKeyboard_Animation(lv_obj_t * TargetObject, int delay);
void reducePanel_Animation(lv_obj_t * TargetObject, int delay);
void moveInputUp_Animation(lv_obj_t * TargetObject, int delay);
void enlargePanel_Animation(lv_obj_t * TargetObject, int delay);
void hideKeyboard_Animation(lv_obj_t * TargetObject, int delay);
void moveInputDown_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_spashScreen
void ui_spashScreen_screen_init(void);
void ui_event_spashScreen(lv_event_t * e);
extern lv_obj_t * ui_spashScreen;
// SCREEN: ui_mainScreen
void ui_mainScreen_screen_init(void);
extern lv_obj_t * ui_mainScreen;
extern lv_obj_t * ui_title;
void ui_event_userMessage(lv_event_t * e);
extern lv_obj_t * ui_userMessage;
void ui_event_btnSend(lv_event_t * e);
extern lv_obj_t * ui_btnSend;
extern lv_obj_t * ui_lblSend;
extern lv_obj_t * ui_keyboard;
void ui_event_mainPanel(lv_event_t * e);
extern lv_obj_t * ui_mainPanel;
void ui_event_btnClear(lv_event_t * e);
extern lv_obj_t * ui_btnClear;
extern lv_obj_t * ui_lblClear;
extern lv_obj_t * ui_conversation;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_splashscreen_png);    // assets\SplashScreen.png
LV_IMG_DECLARE(ui_img_mainscreen_png);    // assets\MainScreen.png

LV_FONT_DECLARE(ui_font_arialrounded20);
LV_FONT_DECLARE(ui_font_arialrounded28);
LV_FONT_DECLARE(ui_font_arialrounded35);
LV_FONT_DECLARE(ui_font_arialrounded45);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
