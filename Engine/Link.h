#pragma once
#include"Graphics.h"

class Link
{
public:
	void ClampScreen();
	void Draw(Graphics& gfx);
	
//private:
	int x ;
	int y;
	static constexpr int width = 20;
	static constexpr int height = 20;
	int sideR = x + width;
	int sideB = y + height;
	int speed = 1;
};

