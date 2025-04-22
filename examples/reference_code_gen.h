/**
 * @file reference_code_gen.h
 */

#ifndef REFERENCE_CODE_GEN_H
#define REFERENCE_CODE_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl/lvgl.h"

/*Include all the widget and components of this library*/
#include "widgets/dark_slider/dark_slider_gen.h"
#include "widgets/slider_box/slider_box_gen.h"
#include "widgets/dark_slider/dark_slider_gen.h"
#include "widgets/slider_box/slider_box_gen.h"
#include "components/buttons/button_default_gen.h"
#include "components/buttons/button_error_gen.h"
#include "components/buttons/button_warning_gen.h"
#include "components/headings/h1_gen.h"
#include "components/headings/h2_gen.h"
#include "components/headings/h3_gen.h"
#include "components/scratchpad_gen.h"
#include "screens/home_gen.h"

/*********************
 *      DEFINES
 *********************/

// TODO: should these definitions be prefixed with the project name?


/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*Fonts*/
extern lv_font_t * inter_sm;
extern lv_font_t * inter_md;
extern lv_font_t * inter_xl;

/*Images*/
extern const void * screenshot;
extern const void * wink;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize the component library
 */

void reference_code_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*REFERENCE_CODE_GEN_H*/
