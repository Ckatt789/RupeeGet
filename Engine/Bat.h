#pragma once
#include "Graphics.h"
class Bat
{
public:
	void Update();
	void Draw(Graphics& gfx);
	void Hit(int linkx, int linky, int linkwidth, int linkheight);
	int x ;
	int y ;
	int vx ;
	int vy ;
	static constexpr int width = 16;
	static constexpr int height = 8;
	bool isHit = false;
};

