SET(SOURCES screens/ui_Screen1.c
    screens/ui_Screen2.c
    screens/ui_Screen3.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_1875797769.c
    images/ui_img_fan_png.c
    images/ui_img_1772094659.c
    images/ui_img_power_png.c
    images/ui_img_110774521.c
    images/ui_img_1102696345.c
    fonts/ui_font_Font1.c
    fonts/ui_font_Font24.c)

add_library(ui ${SOURCES})
