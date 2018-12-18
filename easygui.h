#ifndef easygui_h
#define easygui_h

#include <Arduino.h> 
#include <MCUFRIEND_kbv.h>
#include <Adafruit_GFX.h>
#include <UTFTGLUE.h>
#include <Print.h>
//#include <ADA_GFX_kbv.h>



class Gui : public UTFTGLUE
{
 public:
    Gui(byte modell, int RSS, int WRR,int CSS, int RSTT, int RDD):UTFTGLUE(modell, RSS, WRR, CSS, RSTT, RDD){};
    void backColor(int r, int g, int b);
    void initDisplay();
    void clearDisplay();
    void drawButton(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t r, int16_t g ,int16_t b);

};

#endif