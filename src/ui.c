// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0 Beta1
// LVGL VERSION: 8.2
// PROJECT: M5StackCore2_LVGL8_Test

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_btnA;
lv_obj_t * ui_lblA;
void ui_event_btnB(lv_event_t * e);
lv_obj_t * ui_btnB;
void ui_event_lblB(lv_event_t * e);
lv_obj_t * ui_lblB;
void ui_event_btnC(lv_event_t * e);
lv_obj_t * ui_btnC;
void ui_event_lblC(lv_event_t * e);
lv_obj_t * ui_lblC;
lv_obj_t * ui_PnlTop;
lv_obj_t * ui_Bar1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_PnlTemp;
lv_obj_t * ui_txtTemp;
lv_obj_t * ui_lblTemp;
lv_obj_t * ui_lblDegrees1;
lv_obj_t * ui_PnlHum;
lv_obj_t * ui_lblHum;
lv_obj_t * ui_txtHum;
lv_obj_t * ui_PnlDew;
lv_obj_t * ui_lblDew;
lv_obj_t * ui_txtDew;
lv_obj_t * ui_lblDegrees2;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Switch1;
lv_obj_t * ui_Roller2;
lv_obj_t * ui_Label4;
lv_obj_t * ui_lblDegrees;
lv_obj_t * ui_Screen2;
void ui_event_btnA2(lv_event_t * e);
lv_obj_t * ui_btnA2;
void ui_event_lblA2(lv_event_t * e);
lv_obj_t * ui_lblA2;
lv_obj_t * ui_btnB2;
lv_obj_t * ui_lblB2;
void ui_event_btnC2(lv_event_t * e);
lv_obj_t * ui_btnC2;
void ui_event_lblC2(lv_event_t * e);
lv_obj_t * ui_lblC2;
lv_obj_t * ui_PnlTop2;
lv_obj_t * ui_Bar2;
lv_obj_t * ui_Label2;
lv_obj_t * ui_pnlNRGSpeak;
lv_obj_t * ui_txtWord;
void ui_event_btnMode(lv_event_t * e);
lv_obj_t * ui_btnMode;
lv_obj_t * ui_lblMode;
void ui_event_btnClear(lv_event_t * e);
lv_obj_t * ui_btnClear;
lv_obj_t * ui_lblClear;
lv_obj_t * ui_txtHistory;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Screen3;
void ui_event_btnA3(lv_event_t * e);
lv_obj_t * ui_btnA3;
void ui_event_lblA3(lv_event_t * e);
lv_obj_t * ui_lblA3;
void ui_event_btnB3(lv_event_t * e);
lv_obj_t * ui_btnB3;
void ui_event_lblB3(lv_event_t * e);
lv_obj_t * ui_lblB3;
lv_obj_t * ui_btnC3;
lv_obj_t * ui_lblC3;
lv_obj_t * ui_PnlTop3;
lv_obj_t * ui_Bar3;
lv_obj_t * ui_Label3;
lv_obj_t * ui_pnlEMF;
lv_obj_t * ui_BarEMF3;
lv_obj_t * ui_txtTemp1;
lv_obj_t * ui_lblTemp1;
lv_obj_t * ui_lblDegrees3;
void ui_event_btnMode1(lv_event_t * e);
lv_obj_t * ui_btnMode1;
lv_obj_t * ui_lblMode1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_btnB(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_lblB(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_btnC(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_lblC(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_btnA2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_lblA2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_btnC2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_lblC2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_btnMode(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        fcnNRGMode(e);
    }
}
void ui_event_btnClear(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        fncClearEMF(e);
    }
}
void ui_event_btnA3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_lblA3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_btnB3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_lblB3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_btnMode1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnEMFMode(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnA = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_btnA, 70);
    lv_obj_set_height(ui_btnA, 50);
    lv_obj_set_x(ui_btnA, -91);
    lv_obj_set_y(ui_btnA, 107);
    lv_obj_set_align(ui_btnA, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnA, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnA, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblA = lv_label_create(ui_btnA);
    lv_obj_set_width(ui_lblA, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblA, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblA, 0);
    lv_obj_set_y(ui_lblA, -3);
    lv_obj_set_align(ui_lblA, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblA, "ENV");

    ui_btnB = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_btnB, 70);
    lv_obj_set_height(ui_btnB, 50);
    lv_obj_set_x(ui_btnB, -1);
    lv_obj_set_y(ui_btnB, 107);
    lv_obj_set_align(ui_btnB, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnB, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnB, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblB = lv_label_create(ui_btnB);
    lv_obj_set_width(ui_lblB, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblB, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblB, 0);
    lv_obj_set_y(ui_lblB, -3);
    lv_obj_set_align(ui_lblB, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblB, "SPEECH");

    ui_btnC = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_btnC, 70);
    lv_obj_set_height(ui_btnC, 50);
    lv_obj_set_x(ui_btnC, 90);
    lv_obj_set_y(ui_btnC, 107);
    lv_obj_set_align(ui_btnC, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnC, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnC, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblC = lv_label_create(ui_btnC);
    lv_obj_set_width(ui_lblC, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblC, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblC, 0);
    lv_obj_set_y(ui_lblC, -3);
    lv_obj_set_align(ui_lblC, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblC, "EMF");

    ui_PnlTop = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_PnlTop, 315);
    lv_obj_set_height(ui_PnlTop, 50);
    lv_obj_set_x(ui_PnlTop, 0);
    lv_obj_set_y(ui_PnlTop, -117);
    lv_obj_set_align(ui_PnlTop, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PnlTop, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PnlTop, 140, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_PnlTop, lv_color_hex(0x1105F4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_PnlTop, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_PnlTop, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bar1 = lv_bar_create(ui_PnlTop);
    lv_obj_set_width(ui_Bar1, 26);
    lv_obj_set_height(ui_Bar1, 10);
    lv_obj_set_x(ui_Bar1, 129);
    lv_obj_set_y(ui_Bar1, 10);
    lv_obj_set_align(ui_Bar1, LV_ALIGN_CENTER);

    ui_Label1 = lv_label_create(ui_PnlTop);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, 10);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "TEMPEST");

    ui_PnlTemp = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_PnlTemp, 142);
    lv_obj_set_height(ui_PnlTemp, 65);
    lv_obj_set_x(ui_PnlTemp, -77);
    lv_obj_set_y(ui_PnlTemp, -48);
    lv_obj_set_align(ui_PnlTemp, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PnlTemp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PnlTemp, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PnlTemp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtTemp = lv_label_create(ui_PnlTemp);
    lv_obj_set_width(ui_txtTemp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_txtTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_txtTemp, 1);
    lv_obj_set_y(ui_txtTemp, -4);
    lv_obj_set_align(ui_txtTemp, LV_ALIGN_CENTER);
    lv_label_set_text(ui_txtTemp, "00.0");
    lv_obj_set_style_text_color(ui_txtTemp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_txtTemp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_txtTemp, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblTemp = lv_label_create(ui_PnlTemp);
    lv_obj_set_width(ui_lblTemp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblTemp, 0);
    lv_obj_set_y(ui_lblTemp, 22);
    lv_obj_set_align(ui_lblTemp, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblTemp, "TEMPERATURE (F)");
    lv_obj_set_style_text_color(ui_lblTemp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblTemp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblDegrees1 = lv_label_create(ui_PnlTemp);
    lv_obj_set_width(ui_lblDegrees1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblDegrees1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblDegrees1, 57);
    lv_obj_set_y(ui_lblDegrees1, -10);
    lv_obj_set_align(ui_lblDegrees1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblDegrees1, "°");
    lv_obj_set_style_text_color(ui_lblDegrees1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblDegrees1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblDegrees1, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PnlHum = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_PnlHum, 142);
    lv_obj_set_height(ui_PnlHum, 65);
    lv_obj_set_x(ui_PnlHum, 77);
    lv_obj_set_y(ui_PnlHum, -48);
    lv_obj_set_align(ui_PnlHum, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PnlHum, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PnlHum, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PnlHum, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblHum = lv_label_create(ui_PnlHum);
    lv_obj_set_width(ui_lblHum, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblHum, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblHum, 0);
    lv_obj_set_y(ui_lblHum, 22);
    lv_obj_set_align(ui_lblHum, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblHum, "HUMIDITY %ppm");
    lv_obj_set_style_text_color(ui_lblHum, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblHum, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtHum = lv_label_create(ui_PnlHum);
    lv_obj_set_width(ui_txtHum, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_txtHum, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_txtHum, 1);
    lv_obj_set_y(ui_txtHum, -4);
    lv_obj_set_align(ui_txtHum, LV_ALIGN_CENTER);
    lv_label_set_text(ui_txtHum, "00.0");
    lv_obj_set_style_text_color(ui_txtHum, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_txtHum, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_txtHum, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PnlDew = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_PnlDew, 142);
    lv_obj_set_height(ui_PnlDew, 65);
    lv_obj_set_x(ui_PnlDew, -77);
    lv_obj_set_y(ui_PnlDew, 31);
    lv_obj_set_align(ui_PnlDew, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PnlDew, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PnlDew, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PnlDew, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblDew = lv_label_create(ui_PnlDew);
    lv_obj_set_width(ui_lblDew, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblDew, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblDew, 0);
    lv_obj_set_y(ui_lblDew, 22);
    lv_obj_set_align(ui_lblDew, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblDew, "DEWPOINT (F)");
    lv_obj_set_style_text_color(ui_lblDew, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblDew, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtDew = lv_label_create(ui_PnlDew);
    lv_obj_set_width(ui_txtDew, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_txtDew, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_txtDew, 1);
    lv_obj_set_y(ui_txtDew, -4);
    lv_obj_set_align(ui_txtDew, LV_ALIGN_CENTER);
    lv_label_set_text(ui_txtDew, "00.0");
    lv_obj_set_style_text_color(ui_txtDew, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_txtDew, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_txtDew, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblDegrees2 = lv_label_create(ui_PnlDew);
    lv_obj_set_width(ui_lblDegrees2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblDegrees2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblDegrees2, 57);
    lv_obj_set_y(ui_lblDegrees2, -10);
    lv_obj_set_align(ui_lblDegrees2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblDegrees2, "°");
    lv_obj_set_style_text_color(ui_lblDegrees2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblDegrees2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblDegrees2, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel4 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel4, 142);
    lv_obj_set_height(ui_Panel4, 65);
    lv_obj_set_x(ui_Panel4, 77);
    lv_obj_set_y(ui_Panel4, 31);
    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel4, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch1 = lv_switch_create(ui_Panel4);
    lv_obj_set_width(ui_Switch1, 44);
    lv_obj_set_height(ui_Switch1, 20);
    lv_obj_set_x(ui_Switch1, -36);
    lv_obj_set_y(ui_Switch1, -8);
    lv_obj_set_align(ui_Switch1, LV_ALIGN_CENTER);

    ui_Roller2 = lv_roller_create(ui_Screen1);
    lv_roller_set_options(ui_Roller2, "1\n2\n3\n5\n10\n15\n20\n30\n50", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_Roller2, 32);
    lv_obj_set_width(ui_Roller2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Roller2, 94);
    lv_obj_set_y(ui_Roller2, 23);
    lv_obj_set_align(ui_Roller2, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(ui_Roller2, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_Roller2, false, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, 76);
    lv_obj_set_y(ui_Label4, 51);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "TMP CHG ALERT");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblDegrees = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_lblDegrees, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblDegrees, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblDegrees, 129);
    lv_obj_set_y(ui_lblDegrees, 22);
    lv_obj_set_align(ui_lblDegrees, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblDegrees, "°");
    lv_obj_set_style_text_color(ui_lblDegrees, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblDegrees, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblDegrees, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_lblB, ui_event_lblB, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnB, ui_event_btnB, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_lblC, ui_event_lblC, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnC, ui_event_btnC, LV_EVENT_ALL, NULL);

}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnA2 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_btnA2, 70);
    lv_obj_set_height(ui_btnA2, 50);
    lv_obj_set_x(ui_btnA2, -91);
    lv_obj_set_y(ui_btnA2, 107);
    lv_obj_set_align(ui_btnA2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnA2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnA2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblA2 = lv_label_create(ui_btnA2);
    lv_obj_set_width(ui_lblA2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblA2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblA2, 0);
    lv_obj_set_y(ui_lblA2, -3);
    lv_obj_set_align(ui_lblA2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblA2, "ENV");

    ui_btnB2 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_btnB2, 70);
    lv_obj_set_height(ui_btnB2, 50);
    lv_obj_set_x(ui_btnB2, -1);
    lv_obj_set_y(ui_btnB2, 107);
    lv_obj_set_align(ui_btnB2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnB2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnB2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblB2 = lv_label_create(ui_btnB2);
    lv_obj_set_width(ui_lblB2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblB2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblB2, 0);
    lv_obj_set_y(ui_lblB2, -3);
    lv_obj_set_align(ui_lblB2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblB2, "SPEECH");

    ui_btnC2 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_btnC2, 70);
    lv_obj_set_height(ui_btnC2, 50);
    lv_obj_set_x(ui_btnC2, 90);
    lv_obj_set_y(ui_btnC2, 107);
    lv_obj_set_align(ui_btnC2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnC2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnC2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblC2 = lv_label_create(ui_btnC2);
    lv_obj_set_width(ui_lblC2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblC2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblC2, 0);
    lv_obj_set_y(ui_lblC2, -3);
    lv_obj_set_align(ui_lblC2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblC2, "EMF");

    ui_PnlTop2 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_PnlTop2, 315);
    lv_obj_set_height(ui_PnlTop2, 50);
    lv_obj_set_x(ui_PnlTop2, 0);
    lv_obj_set_y(ui_PnlTop2, -117);
    lv_obj_set_align(ui_PnlTop2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PnlTop2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_PnlTop2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_radius(ui_PnlTop2, 140, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_PnlTop2, lv_color_hex(0x1105F4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_PnlTop2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_PnlTop2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bar2 = lv_bar_create(ui_PnlTop2);
    lv_obj_set_width(ui_Bar2, 26);
    lv_obj_set_height(ui_Bar2, 10);
    lv_obj_set_x(ui_Bar2, 129);
    lv_obj_set_y(ui_Bar2, 10);
    lv_obj_set_align(ui_Bar2, LV_ALIGN_CENTER);

    ui_Label2 = lv_label_create(ui_PnlTop2);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, 10);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "TEMPEST");

    ui_pnlNRGSpeak = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_pnlNRGSpeak, 252);
    lv_obj_set_height(ui_pnlNRGSpeak, 161);
    lv_obj_set_x(ui_pnlNRGSpeak, 0);
    lv_obj_set_y(ui_pnlNRGSpeak, -5);
    lv_obj_set_align(ui_pnlNRGSpeak, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_pnlNRGSpeak, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_pnlNRGSpeak, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlNRGSpeak, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtWord = lv_textarea_create(ui_pnlNRGSpeak);
    lv_obj_set_width(ui_txtWord, 240);
    lv_obj_set_height(ui_txtWord, 41);
    lv_obj_set_x(ui_txtWord, 0);
    lv_obj_set_y(ui_txtWord, -48);
    lv_obj_set_align(ui_txtWord, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_txtWord, "Current Word");
    lv_obj_clear_flag(ui_txtWord, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_text_font(ui_txtWord, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMode = lv_btn_create(ui_pnlNRGSpeak);
    lv_obj_set_width(ui_btnMode, 76);
    lv_obj_set_height(ui_btnMode, 39);
    lv_obj_set_x(ui_btnMode, 78);
    lv_obj_set_y(ui_btnMode, 52);
    lv_obj_set_align(ui_btnMode, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnMode, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMode, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnMode, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnMode, lv_color_hex(0x0027FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnMode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btnMode, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblMode = lv_label_create(ui_btnMode);
    lv_obj_set_width(ui_lblMode, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblMode, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblMode, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblMode, "MODE");
    lv_obj_set_style_text_color(ui_lblMode, lv_color_hex(0x00FF2B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblMode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnClear = lv_btn_create(ui_pnlNRGSpeak);
    lv_obj_set_width(ui_btnClear, 76);
    lv_obj_set_height(ui_btnClear, 39);
    lv_obj_set_x(ui_btnClear, -78);
    lv_obj_set_y(ui_btnClear, 52);
    lv_obj_set_align(ui_btnClear, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnClear, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnClear, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnClear, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnClear, lv_color_hex(0x0027FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnClear, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btnClear, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblClear = lv_label_create(ui_btnClear);
    lv_obj_set_width(ui_lblClear, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblClear, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblClear, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblClear, "CLEAR");
    lv_obj_set_style_text_color(ui_lblClear, lv_color_hex(0x00FF2B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblClear, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtHistory = lv_textarea_create(ui_pnlNRGSpeak);
    lv_obj_set_width(ui_txtHistory, 240);
    lv_obj_set_height(ui_txtHistory, 29);
    lv_obj_set_x(ui_txtHistory, 0);
    lv_obj_set_y(ui_txtHistory, -8);
    lv_obj_set_align(ui_txtHistory, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_txtHistory, "History...");
    lv_obj_clear_flag(ui_txtHistory, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_text_font(ui_txtHistory, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_pnlNRGSpeak);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, 21);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "ENVIRONMENTAL MODE");
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0xF9F9F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_lblA2, ui_event_lblA2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnA2, ui_event_btnA2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_lblC2, ui_event_lblC2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnC2, ui_event_btnC2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnMode, ui_event_btnMode, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnClear, ui_event_btnClear, LV_EVENT_ALL, NULL);

}
void ui_Screen3_screen_init(void)
{
    ui_Screen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnA3 = lv_btn_create(ui_Screen3);
    lv_obj_set_width(ui_btnA3, 70);
    lv_obj_set_height(ui_btnA3, 50);
    lv_obj_set_x(ui_btnA3, -91);
    lv_obj_set_y(ui_btnA3, 107);
    lv_obj_set_align(ui_btnA3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnA3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnA3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblA3 = lv_label_create(ui_btnA3);
    lv_obj_set_width(ui_lblA3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblA3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblA3, 0);
    lv_obj_set_y(ui_lblA3, -3);
    lv_obj_set_align(ui_lblA3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblA3, "ENV");

    ui_btnB3 = lv_btn_create(ui_Screen3);
    lv_obj_set_width(ui_btnB3, 70);
    lv_obj_set_height(ui_btnB3, 50);
    lv_obj_set_x(ui_btnB3, -1);
    lv_obj_set_y(ui_btnB3, 107);
    lv_obj_set_align(ui_btnB3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnB3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnB3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblB3 = lv_label_create(ui_btnB3);
    lv_obj_set_width(ui_lblB3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblB3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblB3, 0);
    lv_obj_set_y(ui_lblB3, -3);
    lv_obj_set_align(ui_lblB3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblB3, "SPEECH");

    ui_btnC3 = lv_btn_create(ui_Screen3);
    lv_obj_set_width(ui_btnC3, 70);
    lv_obj_set_height(ui_btnC3, 50);
    lv_obj_set_x(ui_btnC3, 90);
    lv_obj_set_y(ui_btnC3, 107);
    lv_obj_set_align(ui_btnC3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnC3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnC3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblC3 = lv_label_create(ui_btnC3);
    lv_obj_set_width(ui_lblC3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblC3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblC3, 0);
    lv_obj_set_y(ui_lblC3, -3);
    lv_obj_set_align(ui_lblC3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblC3, "EMF");

    ui_PnlTop3 = lv_obj_create(ui_Screen3);
    lv_obj_set_width(ui_PnlTop3, 315);
    lv_obj_set_height(ui_PnlTop3, 50);
    lv_obj_set_x(ui_PnlTop3, 0);
    lv_obj_set_y(ui_PnlTop3, -117);
    lv_obj_set_align(ui_PnlTop3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PnlTop3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PnlTop3, 140, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_PnlTop3, lv_color_hex(0x1105F4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_PnlTop3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_PnlTop3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bar3 = lv_bar_create(ui_PnlTop3);
    lv_obj_set_width(ui_Bar3, 26);
    lv_obj_set_height(ui_Bar3, 10);
    lv_obj_set_x(ui_Bar3, 129);
    lv_obj_set_y(ui_Bar3, 10);
    lv_obj_set_align(ui_Bar3, LV_ALIGN_CENTER);

    ui_Label3 = lv_label_create(ui_PnlTop3);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 0);
    lv_obj_set_y(ui_Label3, 10);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "TEMPEST");

    ui_pnlEMF = lv_obj_create(ui_Screen3);
    lv_obj_set_width(ui_pnlEMF, 252);
    lv_obj_set_height(ui_pnlEMF, 161);
    lv_obj_set_x(ui_pnlEMF, 0);
    lv_obj_set_y(ui_pnlEMF, -5);
    lv_obj_set_align(ui_pnlEMF, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_pnlEMF, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_pnlEMF, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlEMF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BarEMF3 = lv_bar_create(ui_pnlEMF);
    lv_bar_set_range(ui_BarEMF3, 0, 4095);
    lv_bar_set_value(ui_BarEMF3, 22, LV_ANIM_OFF);
    lv_obj_set_width(ui_BarEMF3, 252);
    lv_obj_set_height(ui_BarEMF3, 14);
    lv_obj_set_x(ui_BarEMF3, 0);
    lv_obj_set_y(ui_BarEMF3, -64);
    lv_obj_set_align(ui_BarEMF3, LV_ALIGN_CENTER);

    ui_txtTemp1 = lv_label_create(ui_pnlEMF);
    lv_obj_set_width(ui_txtTemp1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_txtTemp1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_txtTemp1, -5);
    lv_obj_set_y(ui_txtTemp1, -20);
    lv_obj_set_align(ui_txtTemp1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_txtTemp1, "00.0");
    lv_obj_set_style_text_color(ui_txtTemp1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_txtTemp1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_txtTemp1, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblTemp1 = lv_label_create(ui_pnlEMF);
    lv_obj_set_width(ui_lblTemp1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblTemp1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblTemp1, 0);
    lv_obj_set_y(ui_lblTemp1, 21);
    lv_obj_set_align(ui_lblTemp1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblTemp1, "EMF SENSOR LEVEL");
    lv_obj_set_style_text_color(ui_lblTemp1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblTemp1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblDegrees3 = lv_label_create(ui_pnlEMF);
    lv_obj_set_width(ui_lblDegrees3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblDegrees3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblDegrees3, 63);
    lv_obj_set_y(ui_lblDegrees3, -27);
    lv_obj_set_align(ui_lblDegrees3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblDegrees3, "uT");
    lv_obj_set_style_text_color(ui_lblDegrees3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblDegrees3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblDegrees3, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMode1 = lv_btn_create(ui_Screen3);
    lv_obj_set_width(ui_btnMode1, 76);
    lv_obj_set_height(ui_btnMode1, 39);
    lv_obj_set_x(ui_btnMode1, 0);
    lv_obj_set_y(ui_btnMode1, 47);
    lv_obj_set_align(ui_btnMode1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnMode1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMode1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnMode1, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnMode1, lv_color_hex(0x0027FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnMode1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btnMode1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblMode1 = lv_label_create(ui_btnMode1);
    lv_obj_set_width(ui_lblMode1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblMode1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblMode1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblMode1, "MODE");
    lv_obj_set_style_text_color(ui_lblMode1, lv_color_hex(0x00FF2B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblMode1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_lblA3, ui_event_lblA3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnA3, ui_event_btnA3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_lblB3, ui_event_lblB3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnB3, ui_event_btnB3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnMode1, ui_event_btnMode1, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    ui_Screen3_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
