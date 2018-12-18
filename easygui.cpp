
#include "easygui.h"

//Gui::Gui(modell,  RSS,  WRR, CSS,  RSTT,  RDD){
//}

void Gui::backColor(int r, int g, int b){
   fillScr( r,  g,  b);
}
void Gui::initDisplay(){
	 InitLCD();
}
void Gui::clearDisplay(){
	 clrScr();
}
void Gui::drawButton(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t r, int16_t g ,int16_t b){
	setColor(r, g, b);
	fillRect(x0, y0, x1 + getFontXsize(), y1 + getFontXsize());
}