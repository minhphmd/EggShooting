// 4.24.1 0xddbb1319
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_backgrounds_240x320_puzzle[]; // BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_240X320_PUZZLE_ID = 0, Size: 240x320 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_action[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_ACTION_ID = 1, Size: 100x36 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_pressed[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_PRESSED_ID = 2, Size: 100x36 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_normal[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_NORMAL_ID = 3, Size: 240x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_pressed[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_PRESSED_ID = 4, Size: 240x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_action[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_ACTION_ID = 5, Size: 110x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_pressed[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_PRESSED_ID = 6, Size: 110x50 pixels
extern const unsigned char image_lose_image[]; // BITMAP_LOSE_IMAGE_ID = 7, Size: 406x360 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_backgrounds_240x320_puzzle, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_action, 0, 100, 36, 12, 1, 76, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_pressed, 0, 100, 36, 12, 1, 76, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_normal, 0, 240, 50, 5, 0, 230, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_medium_rounded_pressed, 0, 240, 50, 5, 0, 230, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_action, 0, 110, 50, 13, 3, 84, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 44, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_pressed, 0, 110, 50, 13, 3, 84, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 44, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_lose_image, 0, 406, 360, 167, 245, 109, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 24, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
