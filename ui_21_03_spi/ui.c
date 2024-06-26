// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: AGBikeDashboard

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_MainPanel;
lv_obj_t * ui_SportsmodePanel;
lv_obj_t * ui_Button2;
lv_obj_t * ui_SportsSlider;
lv_obj_t * ui_SportsmodehedingLabel;
lv_obj_t * ui_TempPanel;
lv_obj_t * ui_TempunitLabel;
lv_obj_t * ui_TempLabel;
lv_obj_t * ui_TempSlider;
lv_obj_t * ui_TemphedingLabel;
lv_obj_t * ui_AttributePanel;
lv_obj_t * ui_voltagePanel;
lv_obj_t * ui_VoltageLabel;
lv_obj_t * ui_voltageheadingLabel;
lv_obj_t * ui_voltageunitLabel;
lv_obj_t * ui_currentPanel;
lv_obj_t * ui_CurrentLabel;
lv_obj_t * ui_currentheadingLabel;
lv_obj_t * ui_currentunitLabel;
lv_obj_t * ui_powerPanel;
lv_obj_t * ui_PowerLabel;
lv_obj_t * ui_powerunitLabel;
lv_obj_t * ui_PowerheadingLabel;
lv_obj_t * ui_AmpHourPanel;
lv_obj_t * ui_AmpHourLabel;
lv_obj_t * ui_powerunitLabel2;
lv_obj_t * ui_AmpHourheadingLabel;
lv_obj_t * ui_SocPanel;
lv_obj_t * ui_SocLabel;
lv_obj_t * ui_socunitLabel3;
lv_obj_t * ui_socheadingLabel3;
lv_obj_t * ui_WattHourPanel;
lv_obj_t * ui_WattHourLabel;
lv_obj_t * ui_watthourunitLabel;
lv_obj_t * ui_WattHourheadingLabel;
lv_obj_t * ui_EcoModePanel;
lv_obj_t * ui_EcoModeLabel;
lv_obj_t * ui_EcoModeunitLabel;
lv_obj_t * ui_EcoModeheadingLabel;
lv_obj_t * ui_SportsModePanel;
lv_obj_t * ui_SportsModeLabel;
lv_obj_t * ui_SportsModeunitLabel;
lv_obj_t * ui_SportsModeheadingLabel;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
