
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
void Gui::drawButton(char txt[256], int16_t x0, int16_t y0){

	int lenght = strlen(txt);
	int height = 8;
	int16_t r = 0;
	int16_t g = 153;
	int16_t b = 153;


	setColor(r, g, b);
		fillRect(x0, y0, x0 + (lenght * 6) + 9, y0 + height * 3);
	setColor(0, 102, 102);
		drawLine(x0, y0 + height * 3, x0 + (lenght * 6) + 9, y0 + height * 3 );
		drawLine( x0 + (lenght * 6) + 9, y0, x0 + (lenght * 6) + 9, y0 + height * 3);
	setColor(0, 204, 204);
		drawLine(x0, y0, x0, y0 + height*3 );
		drawLine(x0, y0, x0 + (lenght * 6) + 9, y0 );
	setColor(0, 0, 0);
		drawRect(x0-1, y0-1, x0 + (lenght * 6) + 10, y0+height*3+1);
	setBackColor(r, g, b);
		setFont(NULL);
		setTextSize(0);
		print(txt, x0+5, y0+8);
}
void Gui::drawTextfield(char txt[256], int16_t x0, int16_t y0){
	int16_t r = 0;
	int16_t g = 118;
	int16_t b = 90;
	int lenght = strlen(txt);
	setColor(r, g, b);
		fillRect(x0, y0, x0+lenght*15, y0+35);
	setColor(0, 0, 0);
		setBackColor(r, g, b);
		setTextSize(2);
		print(txt, x0+10, y0+10);
};