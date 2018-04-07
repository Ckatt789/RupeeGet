#pragma once
#include "Graphics.h"
class Rupee
{
public:
	void Update();
	void Get(int linkx, int linky, int linkwidth, int linkheight);
	void Draw(Graphics& gfx);
	int x ;
	int y ;
	
	bool isGot = false;
	static constexpr int width = 9;
	static constexpr int height = 15;

};

