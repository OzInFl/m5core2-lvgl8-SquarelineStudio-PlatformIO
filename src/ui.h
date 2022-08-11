// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0 Beta1
// LVGL VERSION: 8.2
// PROJECT: M5StackCore2_LVGL8_Test

#ifndef _M5STACKCORE2_GHOSTOOL_UI_H
#define _M5STACKCORE2_GHOSTOOL_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_btnA;
extern lv_obj_t * ui_lblA;
void ui_event_btnB(lv_event_t * e);
extern lv_obj_t * ui_btnB;
void ui_event_lblB(lv_event_t * e);
extern lv_obj_t * ui_lblB;
void ui_event_btnC(lv_event_t * e);
extern lv_obj_t * ui_btnC;
void ui_event_lblC(lv_event_t * e);
extern lv_obj_t * ui_lblC;
extern lv_obj_t * ui_PnlTop;
extern lv_obj_t * ui_Bar1;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_PnlTemp;
extern lv_obj_t * ui_txtTemp;
extern lv_obj_t * ui_lblTemp;
extern lv_obj_t * ui_lblDegrees1;
extern lv_obj_t * ui_PnlHum;
extern lv_obj_t * ui_lblHum;
extern lv_obj_t * ui_txtHum;
extern lv_obj_t * ui_PnlDew;
extern lv_obj_t * ui_lblDew;
extern lv_obj_t * ui_txtDew;
extern lv_obj_t * ui_lblDegrees2;
extern lv_obj_t * ui_Panel4;
extern lv_obj_t * ui_Switch1;
extern lv_obj_t * ui_Roller2;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_lblDegrees;
extern lv_obj_t * ui_Screen2;
void ui_event_btnA2(lv_event_t * e);
extern lv_obj_t * ui_btnA2;
void ui_event_lblA2(lv_event_t * e);
extern lv_obj_t * ui_lblA2;
extern lv_obj_t * ui_btnB2;
extern lv_obj_t * ui_lblB2;
void ui_event_btnC2(lv_event_t * e);
extern lv_obj_t * ui_btnC2;
void ui_event_lblC2(lv_event_t * e);
extern lv_obj_t * ui_lblC2;
extern lv_obj_t * ui_PnlTop2;
extern lv_obj_t * ui_Bar2;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_pnlNRGSpeak;
extern lv_obj_t * ui_txtWord;
void ui_event_btnMode(lv_event_t * e);
extern lv_obj_t * ui_btnMode;
extern lv_obj_t * ui_lblMode;
void ui_event_btnClear(lv_event_t * e);
extern lv_obj_t * ui_btnClear;
extern lv_obj_t * ui_lblClear;
extern lv_obj_t * ui_txtHistory;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_Screen3;
void ui_event_btnA3(lv_event_t * e);
extern lv_obj_t * ui_btnA3;
void ui_event_lblA3(lv_event_t * e);
extern lv_obj_t * ui_lblA3;
void ui_event_btnB3(lv_event_t * e);
extern lv_obj_t * ui_btnB3;
void ui_event_lblB3(lv_event_t * e);
extern lv_obj_t * ui_lblB3;
extern lv_obj_t * ui_btnC3;
extern lv_obj_t * ui_lblC3;
extern lv_obj_t * ui_PnlTop3;
extern lv_obj_t * ui_Bar3;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_pnlEMF;
extern lv_obj_t * ui_BarEMF3;
extern lv_obj_t * ui_txtTemp1;
extern lv_obj_t * ui_lblTemp1;
extern lv_obj_t * ui_lblDegrees3;
void ui_event_btnMode1(lv_event_t * e);
extern lv_obj_t * ui_btnMode1;
extern lv_obj_t * ui_lblMode1;

void fcnNRGMode(lv_event_t * e);
void fncClearEMF(lv_event_t * e);
void fcnEMFMode(lv_event_t * e);





void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
