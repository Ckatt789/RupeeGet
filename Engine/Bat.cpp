#include "Bat.h"
#include "Graphics.h"
#include "Block.h"

void Bat::Update()
{
	x += vx;
	y += vy;
	
	const int right = x + width;
	const int bottom = y + height;

	if (x <0)
	{
		x = 0;
		vx = -vx;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	
	if (y <0)
	{
		y = 0;
		vy = -vy;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}


	

	/*
	else if (right <= Block::BlockWidth)
	{
		x = (Block::BlockWidth - 1) - width;
		vx = -vx;
	}

	
	

	else if (bottom <= Block::BlockHeight)
	{
		y = (Block::BlockHeight - 1) - height;
		vy = -vy;
	}

	*/

}

void Bat::Draw(Graphics & gfx)
{

		gfx.PutPixel(4 + x, 0 + y, 216, 40, 0);
		gfx.PutPixel(6 + x, 0 + y, 216, 40, 0);
		gfx.PutPixel(9 + x, 0 + y, 216, 40, 0);
		gfx.PutPixel(11 + x, 0 + y, 216, 40, 0);
		gfx.PutPixel(3 + x, 1 + y, 216, 40, 0);
		gfx.PutPixel(4 + x, 1 + y, 216, 40, 0);
		gfx.PutPixel(6 + x, 1 + y, 252, 152, 56);
		gfx.PutPixel(7 + x, 1 + y, 216, 40, 0);
		gfx.PutPixel(8 + x, 1 + y, 216, 40, 0);
		gfx.PutPixel(9 + x, 1 + y, 252, 152, 56);
		gfx.PutPixel(11 + x, 1 + y, 216, 40, 0);
		gfx.PutPixel(12 + x, 1 + y, 216, 40, 0);
		gfx.PutPixel(2 + x, 2 + y, 216, 40, 0);
		gfx.PutPixel(3 + x, 2 + y, 216, 40, 0);
		gfx.PutPixel(4 + x, 2 + y, 216, 40, 0);
		gfx.PutPixel(5 + x, 2 + y, 216, 40, 0);
		gfx.PutPixel(6 + x, 2 + y, 252, 152, 56);
		gfx.PutPixel(7 + x, 2 + y, 216, 40, 0);
		gfx.PutPixel(8 + x, 2 + y, 216, 40, 0);
		gfx.PutPixel(9 + x, 2 + y, 252, 152, 56);
		gfx.PutPixel(10 + x, 2 + y, 216, 40, 0);
		gfx.PutPixel(11 + x, 2 + y, 216, 40, 0);
		gfx.PutPixel(12 + x, 2 + y, 216, 40, 0);
		gfx.PutPixel(13 + x, 2 + y, 216, 40, 0);
		gfx.PutPixel(2 + x, 3 + y, 216, 40, 0);
		gfx.PutPixel(3 + x, 3 + y, 216, 40, 0);
		gfx.PutPixel(4 + x, 3 + y, 216, 40, 0);
		gfx.PutPixel(5 + x, 3 + y, 216, 40, 0);
		gfx.PutPixel(6 + x, 3 + y, 216, 40, 0);
		gfx.PutPixel(7 + x, 3 + y, 216, 40, 0);
		gfx.PutPixel(8 + x, 3 + y, 216, 40, 0);
		gfx.PutPixel(9 + x, 3 + y, 216, 40, 0);
		gfx.PutPixel(10 + x, 3 + y, 216, 40, 0);
		gfx.PutPixel(11 + x, 3 + y, 216, 40, 0);
		gfx.PutPixel(12 + x, 3 + y, 216, 40, 0);
		gfx.PutPixel(13 + x, 3 + y, 216, 40, 0);
		gfx.PutPixel(1 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(2 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(3 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(4 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(5 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(6 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(7 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(8 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(9 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(10 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(11 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(12 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(13 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(14 + x, 4 + y, 216, 40, 0);
		gfx.PutPixel(1 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(2 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(3 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(4 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(5 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(6 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(7 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(8 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(9 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(10 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(11 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(12 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(13 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(14 + x, 5 + y, 216, 40, 0);
		gfx.PutPixel(0 + x, 6 + y, 216, 40, 0);
		gfx.PutPixel(1 + x, 6 + y, 216, 40, 0);
		gfx.PutPixel(3 + x, 6 + y, 216, 40, 0);
		gfx.PutPixel(5 + x, 6 + y, 216, 40, 0);
		gfx.PutPixel(6 + x, 6 + y, 216, 40, 0);
		gfx.PutPixel(7 + x, 6 + y, 216, 40, 0);
		gfx.PutPixel(8 + x, 6 + y, 216, 40, 0);
		gfx.PutPixel(9 + x, 6 + y, 216, 40, 0);
		gfx.PutPixel(10 + x, 6 + y, 216, 40, 0);
		gfx.PutPixel(12 + x, 6 + y, 216, 40, 0);
		gfx.PutPixel(14 + x, 6 + y, 216, 40, 0);
		gfx.PutPixel(15 + x, 6 + y, 216, 40, 0);
		gfx.PutPixel(0 + x, 7 + y, 216, 40, 0);
		gfx.PutPixel(6 + x, 7 + y, 216, 40, 0);
		gfx.PutPixel(9 + x, 7 + y, 216, 40, 0);
		gfx.PutPixel(15 + x, 7 + y, 216, 40, 0);



}

void Bat::Hit(int linkx, int linky, int linkwidth, int linkheight)
{
	const int linkright =  linkx + linkwidth;
	const int linkbottom = linky + linkheight;
	const int batright = x + width;
	const int batbottom = y + height;
	if(
		linkright >= x &&
		linkx <= batright &&
		linkbottom >= y &&
		linky <= batbottom)
	{
		isHit = true;
	}
}

