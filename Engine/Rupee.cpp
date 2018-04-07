#include "Rupee.h"
#include "Graphics.h"

void Rupee::Update()
{
	const int right = x + width;
	if (x <0)
	{
		x = 0;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;
	}

	const int bottom = y + height;
	if (y <0)
	{
		y = 0;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - height;
	}
}

void Rupee::Get(int linkx, int linky, int linkwidth, int linkheight)
{
	const int linkright = linkx + linkwidth;
	const int linkbottom = linky + linkheight;
	const int rupeeright = x + width;
	const int rupeebottom = y + height;
	if (
		linkright >= x &&
		linkx <= rupeeright &&
		linkbottom >= y &&
		linky <= rupeebottom)
	{
		isGot = true;
	}
}

void Rupee::Draw(Graphics& gfx)
{
		gfx.PutPixel(3 + x, 0 + y, 255, 255, 255);
		gfx.PutPixel(4 + x, 0 + y, 255, 255, 255);
		gfx.PutPixel(5 + x, 0 + y, 0, 132, 255);
		gfx.PutPixel(2 + x, 1 + y, 255, 255, 255);
		gfx.PutPixel(3 + x, 1 + y, 255, 255, 255);
		gfx.PutPixel(4 + x, 1 + y, 255, 255, 255);
		gfx.PutPixel(5 + x, 1 + y, 0, 132, 255);
		gfx.PutPixel(6 + x, 1 + y, 0, 132, 255);
		gfx.PutPixel(1 + x, 2 + y, 255, 255, 255);
		gfx.PutPixel(2 + x, 2 + y, 255, 255, 255);
		gfx.PutPixel(3 + x, 2 + y, 255, 255, 255);
		gfx.PutPixel(4 + x, 2 + y, 255, 255, 255);
		gfx.PutPixel(5 + x, 2 + y, 0, 132, 255);
		gfx.PutPixel(6 + x, 2 + y, 0, 132, 255);
		gfx.PutPixel(7 + x, 2 + y, 0, 132, 255);
		gfx.PutPixel(0 + x, 3 + y, 255, 255, 255);
		gfx.PutPixel(1 + x, 3 + y, 255, 255, 255);
		gfx.PutPixel(2 + x, 3 + y, 0, 132, 255);
		gfx.PutPixel(3 + x, 3 + y, 255, 255, 255);
		gfx.PutPixel(4 + x, 3 + y, 0, 132, 255);
		gfx.PutPixel(5 + x, 3 + y, 0, 0, 0);
		gfx.PutPixel(6 + x, 3 + y, 0, 132, 255);
		gfx.PutPixel(7 + x, 3 + y, 0, 0, 0);
		gfx.PutPixel(8 + x, 3 + y, 0, 132, 255);
		gfx.PutPixel(0 + x, 4 + y, 255, 255, 255);
		gfx.PutPixel(1 + x, 4 + y, 255, 255, 255);
		gfx.PutPixel(2 + x, 4 + y, 255, 255, 255);
		gfx.PutPixel(3 + x, 4 + y, 0, 132, 255);
		gfx.PutPixel(4 + x, 4 + y, 0, 132, 255);
		gfx.PutPixel(5 + x, 4 + y, 0, 132, 255);
		gfx.PutPixel(6 + x, 4 + y, 0, 0, 0);
		gfx.PutPixel(7 + x, 4 + y, 0, 132, 255);
		gfx.PutPixel(8 + x, 4 + y, 0, 132, 255);
		gfx.PutPixel(0 + x, 5 + y, 255, 255, 255);
		gfx.PutPixel(1 + x, 5 + y, 255, 255, 255);
		gfx.PutPixel(2 + x, 5 + y, 255, 255, 255);
		gfx.PutPixel(3 + x, 5 + y, 0, 132, 255);
		gfx.PutPixel(4 + x, 5 + y, 0, 132, 255);
		gfx.PutPixel(5 + x, 5 + y, 0, 132, 255);
		gfx.PutPixel(6 + x, 5 + y, 0, 0, 0);
		gfx.PutPixel(7 + x, 5 + y, 0, 132, 255);
		gfx.PutPixel(8 + x, 5 + y, 0, 132, 255);
		gfx.PutPixel(0 + x, 6 + y, 255, 255, 255);
		gfx.PutPixel(1 + x, 6 + y, 255, 255, 255);
		gfx.PutPixel(2 + x, 6 + y, 255, 255, 255);
		gfx.PutPixel(3 + x, 6 + y, 0, 132, 255);
		gfx.PutPixel(4 + x, 6 + y, 0, 132, 255);
		gfx.PutPixel(5 + x, 6 + y, 0, 132, 255);
		gfx.PutPixel(6 + x, 6 + y, 0, 0, 0);
		gfx.PutPixel(7 + x, 6 + y, 0, 132, 255);
		gfx.PutPixel(8 + x, 6 + y, 0, 132, 255);
		gfx.PutPixel(0 + x, 7 + y, 255, 255, 255);
		gfx.PutPixel(1 + x, 7 + y, 255, 255, 255);
		gfx.PutPixel(2 + x, 7 + y, 255, 255, 255);
		gfx.PutPixel(3 + x, 7 + y, 0, 132, 255);
		gfx.PutPixel(4 + x, 7 + y, 0, 132, 255);
		gfx.PutPixel(5 + x, 7 + y, 0, 132, 255);
		gfx.PutPixel(6 + x, 7 + y, 0, 0, 0);
		gfx.PutPixel(7 + x, 7 + y, 0, 132, 255);
		gfx.PutPixel(8 + x, 7 + y, 0, 132, 255);
		gfx.PutPixel(0 + x, 8 + y, 255, 255, 255);
		gfx.PutPixel(1 + x, 8 + y, 255, 255, 255);
		gfx.PutPixel(2 + x, 8 + y, 255, 255, 255);
		gfx.PutPixel(3 + x, 8 + y, 0, 132, 255);
		gfx.PutPixel(4 + x, 8 + y, 0, 132, 255);
		gfx.PutPixel(5 + x, 8 + y, 0, 132, 255);
		gfx.PutPixel(6 + x, 8 + y, 0, 0, 0);
		gfx.PutPixel(7 + x, 8 + y, 0, 132, 255);
		gfx.PutPixel(8 + x, 8 + y, 0, 132, 255);
		gfx.PutPixel(0 + x, 9 + y, 255, 255, 255);
		gfx.PutPixel(1 + x, 9 + y, 255, 255, 255);
		gfx.PutPixel(2 + x, 9 + y, 255, 255, 255);
		gfx.PutPixel(3 + x, 9 + y, 0, 132, 255);
		gfx.PutPixel(4 + x, 9 + y, 0, 132, 255);
		gfx.PutPixel(5 + x, 9 + y, 0, 132, 255);
		gfx.PutPixel(6 + x, 9 + y, 0, 0, 0);
		gfx.PutPixel(7 + x, 9 + y, 0, 132, 255);
		gfx.PutPixel(8 + x, 9 + y, 0, 132, 255);
		gfx.PutPixel(0 + x, 10 + y, 255, 255, 255);
		gfx.PutPixel(1 + x, 10 + y, 255, 255, 255);
		gfx.PutPixel(2 + x, 10 + y, 0, 123, 255);
		gfx.PutPixel(3 + x, 10 + y, 0, 0, 0);
		gfx.PutPixel(4 + x, 10 + y, 0, 132, 255);
		gfx.PutPixel(5 + x, 10 + y, 0, 132, 255);
		gfx.PutPixel(6 + x, 10 + y, 0, 0, 0);
		gfx.PutPixel(7 + x, 10 + y, 0, 132, 255);
		gfx.PutPixel(8 + x, 10 + y, 0, 132, 255);
		gfx.PutPixel(0 + x, 11 + y, 0, 123, 255);
		gfx.PutPixel(1 + x, 11 + y, 0, 123, 255);
		gfx.PutPixel(2 + x, 11 + y, 0, 123, 255);
		gfx.PutPixel(3 + x, 11 + y, 0, 123, 255);
		gfx.PutPixel(4 + x, 11 + y, 0, 0, 0);
		gfx.PutPixel(5 + x, 11 + y, 0, 0, 0);
		gfx.PutPixel(6 + x, 11 + y, 0, 132, 255);
		gfx.PutPixel(7 + x, 11 + y, 0, 0, 0);
		gfx.PutPixel(8 + x, 11 + y, 0, 132, 255);
		gfx.PutPixel(1 + x, 12 + y, 0, 123, 255);
		gfx.PutPixel(2 + x, 12 + y, 0, 123, 255);
		gfx.PutPixel(3 + x, 12 + y, 0, 123, 255);
		gfx.PutPixel(4 + x, 12 + y, 0, 123, 255);
		gfx.PutPixel(5 + x, 12 + y, 0, 123, 255);
		gfx.PutPixel(6 + x, 12 + y, 0, 132, 255);
		gfx.PutPixel(7 + x, 12 + y, 0, 132, 255);
		gfx.PutPixel(2 + x, 13 + y, 0, 123, 255);
		gfx.PutPixel(3 + x, 13 + y, 0, 123, 255);
		gfx.PutPixel(4 + x, 13 + y, 0, 123, 255);
		gfx.PutPixel(5 + x, 13 + y, 0, 132, 255);
		gfx.PutPixel(6 + x, 13 + y, 0, 132, 255);
		gfx.PutPixel(3 + x, 14 + y, 0, 123, 255);
		gfx.PutPixel(4 + x, 14 + y, 0, 132, 255);
		gfx.PutPixel(5 + x, 14 + y, 0, 132, 255);


}
