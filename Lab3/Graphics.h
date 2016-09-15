// Graphics.h

#ifndef Graphics
#define Graphics

#define CLOCK_CENTER	64,50		
#define CLOCK_RADIUS	40

struct clock_hand {
	uint32_t x;
	uint32_t y;
};

struct clock_hand Hour[12] = { //coordinates for all positions of hour hand 
};
	struct clock_hand Min[60] = { //coordinates for all positions of the minute hand
};

void Alarmclock_Graphics_Init(void);
void ST7735_DrawCircle(int x0, int y0, int radius, int color);
void ST7735_Line(int16_t x1, int16_t y1, int16_t x2, int16_t y2)
	

#endif
	