
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

void Gui::drawButton(char txt[256], int16_t x0, int16_t y0){ //Draw button with cords of left top cornen, and text

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
}

void Gui::drawGraph(int x, int y, int w, int h, int xw, int yh){
	setColor(0, 0, 0);
	drawLine(x, y, x, y+yh);
	drawLine(x, y+yh, x+xw, y+yh);
	for (int i = 0; i < w+1; ++i)
	{
		drawLine(x+((xw/w)*i), y+yh-3,x+((xw/w)*i), y+yh+3);
		setFont(NULL);
		setTextSize(0);
		print(String(i),x+((xw/w)*i)-3, y+yh+10);
	}
	for (int i = 0; i < h/10+1; ++i)
	{
		drawLine(x-3, y+yh-((yh/h)*i*10),x+3, y+yh-((yh/h)*i*10));
		setFont(NULL);
		setTextSize(0);
		print(String(i*10),x-15, y+yh-((yh/h)*i*10)-3);
	}
}