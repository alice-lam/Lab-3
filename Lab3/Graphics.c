//Graphics.c
//Sept. 14, 2016

#include <stdint.h>
#include <stdio.h>
#include "ST7735.h"
#include "fixed.h"

void ST7735_Line(int16_t x1, int16_t y1, int16_t x2, int16_t y2) {
	// Draws one line on the ST7735 color LCD
	//  Inputs: (x1,y1) is the start point, (x2,y2) is the end point
	    
	for(int16_t i = x1; i < x2; i += 1) {
		ST7735_DrawPixel(i, y1, ST7735_BLUE);
	}
	
	for(int16_t j = y1; j < y2; j += 1) {
		ST7735_DrawPixel(x1, j, ST7735_BLUE);
	}
}

void ST7735_DrawCircle(int x0, int y0, int radius, int color){


}
