/* ========================================
 *   Usage Guide
 *
 *   Functions declared in this file and duplicated in yourDisplay.h should 
 *      be commented out in this file, as well as GFXmaster.c
 *
 *   Ensure all commented functions are defined in yourDisplay.h
 * ========================================
*/

#ifndef _ADAFRUIT_GFX_H
#define _ADAFRUIT_GFX_H


#include <stdint.h>
    
#define swap(a, b) { int16_t t = a; a = b; b = t; }





  //Adafruit_GFX(int16_t w, int16_t h); // Constructor

  // This MUST be defined by the subclass:              
  // void drawPixel(int16_t x, int16_t y, uint16_t color);       
  // shown here only to demonstrate declaration NEVER include here        






  // These MAY be overridden by the subclass to provide device-specific
  // optimized code.  Comment out any functions optimized in yourDisplay.c
  void drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color);
  //void drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color);
  //void drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color);
  void drawRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
  void fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
  void fillScreen(uint16_t color);
  //void invertDisplay(uint8_t i);

    
    
    
    
  // These exist only with Adafruit_GFX (no subclass overrides)
  void
    GFX_Init(uint16_t w, uint16_t h),
    drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color),
    drawCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,
      uint16_t color),
    fillCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color),
    fillCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,
      int16_t delta, uint16_t color),
    drawTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
      int16_t x2, int16_t y2, uint16_t color),
    fillTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
      int16_t x2, int16_t y2, uint16_t color),
    drawRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
      int16_t radius, uint16_t color),
    fillRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
      int16_t radius, uint16_t color),
    drawBitmap(int16_t x, int16_t y, const uint8_t *bitmap,
      int16_t w, int16_t h, uint16_t color),
    drawBitmapBG(int16_t x, int16_t y, const uint8_t *bitmap,
      int16_t w, int16_t h, uint16_t color, uint16_t bg),
    drawXBitmap(int16_t x, int16_t y, const uint8_t *bitmap, 
      int16_t w, int16_t h, uint16_t color),
    drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color,
      uint16_t bg, uint8_t size),
    setCursor(int16_t x, int16_t y),
    setTextColor(uint16_t c),
    setTextColorBG(uint16_t c, uint16_t bg),
    setTextSize(uint8_t s),
    setTextWrap(uint8_t w), //changed from boolean
    setRotation(uint8_t r),
    cp437(uint8_t x);  //changed from boolean x=true
    void write(uint8_t);
    void writeString(char[]);




  int16_t height(void); //const;
  int16_t width(void); //const;

  uint8_t getRotation(void); //const;

  // get current cursor position (get rotation safe maximum values, using: width() for x, height() for y)
  int16_t getCursorX(void); //const;
  int16_t getCursorY(void); //const;


  const int16_t WIDTH, HEIGHT;   // This is the 'raw' display w/h - never changes
  int16_t _width, _height; // Display w/h as modified by current rotation
  int16_t cursor_x, cursor_y;
  uint16_t textcolor, textbgcolor;
  uint8_t textsize, rotation;
  uint8_t wrap;   // If set, 'wrap' text at right edge of display        **changed from boolean**
  uint8_t _cp437; // If set, use correct CP437 charset (default is off)  **chanfed from boolean**



/*
class Adafruit_GFX_Button {

 public:
  Adafruit_GFX_Button(void);
  void initButton(Adafruit_GFX *gfx, int16_t x, int16_t y, 
		      uint8_t w, uint8_t h, 
		      uint16_t outline, uint16_t fill, uint16_t textcolor,
		      char *label, uint8_t textsize);
  void drawButton(boolean inverted = false);
  boolean contains(int16_t x, int16_t y);

  void press(boolean p);
  boolean isPressed();
  boolean justPressed();
  boolean justReleased();

 private:
  Adafruit_GFX *_gfx;
  int16_t _x, _y;
  uint16_t _w, _h;
  uint8_t _textsize;
  uint16_t _outlinecolor, _fillcolor, _textcolor;
  char _label[10];

  boolean currstate, laststate;

*/


#endif // _ADAFRUIT_GFX_H





/* [] END OF FILE */
