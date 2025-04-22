/**
 * @file reference_code_gen.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "reference_code_gen.h"

#if LV_USE_XML
   #include "widgets/dark_slider/dark_slider_private_gen.h"
   #include "widgets/slider_box/slider_box_private_gen.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*Fonts*/
lv_font_t * inter_sm;
lv_font_t * inter_md;
lv_font_t * inter_xl;

/*Images*/
const void * screenshot;
const void * wink;


/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void reference_code_init_gen(const char * asset_path)
{
    char buf[256];

    /* create tiny ttf font "inter_sm" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    inter_sm = lv_tiny_ttf_create_file(buf, 14);
    /* create tiny ttf font "inter_md" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    inter_md = lv_tiny_ttf_create_file(buf, 18);
    /* create tiny ttf font "inter_xl" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    inter_xl = lv_tiny_ttf_create_file(buf, 22);

    lv_snprintf(buf, 256, "%s%s", asset_path, "images/lvgl.png");
    screenshot = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/wink.png");
    wink = lv_strdup(buf);

    #if LV_USE_XML
        dark_slider_register();
        slider_box_register();

        lv_xml_register_font(NULL, "inter_sm", inter_sm);
        lv_xml_register_font(NULL, "inter_md", inter_md);
        lv_xml_register_font(NULL, "inter_xl", inter_xl);

        lv_xml_register_image(NULL, "screenshot", screenshot);
        lv_xml_register_image(NULL, "wink", wink);

    #endif
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
