#include "Link.h"
#include "Graphics.h"

#include "Game.h"


void Link::ClampScreen()
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

void Link::Draw(Graphics& gfx)
{
	
		gfx.PutPixel(5 + x, 0 + y, 181, 255, 90);
		gfx.PutPixel(6 + x, 0 + y, 181, 255, 90);
		gfx.PutPixel(7 + x, 0 + y, 181, 255, 90);
		gfx.PutPixel(8 + x, 0 + y, 181, 255, 90);
		gfx.PutPixel(9 + x, 0 + y, 181, 255, 90);
		gfx.PutPixel(10 + x, 0 + y, 181, 255, 90);
		gfx.PutPixel(11 + x, 0 + y, 181, 255, 90);
		gfx.PutPixel(12 + x, 0 + y, 181, 255, 90);
		gfx.PutPixel(13 + x, 0 + y, 181, 255, 90);
		gfx.PutPixel(14 + x, 0 + y, 181, 255, 90);
		gfx.PutPixel(4 + x, 1 + y, 181, 255, 90);
		gfx.PutPixel(5 + x, 1 + y, 181, 255, 90);
		gfx.PutPixel(6 + x, 1 + y, 181, 255, 90);
		gfx.PutPixel(7 + x, 1 + y, 181, 255, 90);
		gfx.PutPixel(8 + x, 1 + y, 181, 255, 90);
		gfx.PutPixel(9 + x, 1 + y, 181, 255, 90);
		gfx.PutPixel(10 + x, 1 + y, 181, 255, 90);
		gfx.PutPixel(11 + x, 1 + y, 181, 255, 90);
		gfx.PutPixel(12 + x, 1 + y, 181, 255, 90);
		gfx.PutPixel(13 + x, 1 + y, 181, 255, 90);
		gfx.PutPixel(14 + x, 1 + y, 181, 255, 90);
		gfx.PutPixel(15 + x, 1 + y, 181, 255, 90);
		gfx.PutPixel(1 + x, 2 + y, 255, 173, 90);
		gfx.PutPixel(2 + x, 2 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 2 + y, 181, 255, 90);
		gfx.PutPixel(5 + x, 2 + y, 239, 123, 24);
		gfx.PutPixel(6 + x, 2 + y, 239, 123, 24);
		gfx.PutPixel(7 + x, 2 + y, 239, 123, 24);
		gfx.PutPixel(8 + x, 2 + y, 239, 123, 24);
		gfx.PutPixel(9 + x, 2 + y, 239, 123, 24);
		gfx.PutPixel(10 + x, 2 + y, 239, 123, 24);
		gfx.PutPixel(11 + x, 2 + y, 239, 123, 24);
		gfx.PutPixel(12 + x, 2 + y, 239, 123, 24);
		gfx.PutPixel(13 + x, 2 + y, 239, 123, 24);
		gfx.PutPixel(14 + x, 2 + y, 239, 123, 24);
		gfx.PutPixel(15 + x, 2 + y, 181, 255, 90);
		gfx.PutPixel(17 + x, 2 + y, 255, 173, 90);
		gfx.PutPixel(18 + x, 2 + y, 255, 173, 90);
		gfx.PutPixel(1 + x, 3 + y, 255, 173, 90);
		gfx.PutPixel(2 + x, 3 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 3 + y, 181, 255, 90);
		gfx.PutPixel(5 + x, 3 + y, 239, 123, 24);
		gfx.PutPixel(6 + x, 3 + y, 239, 123, 24);
		gfx.PutPixel(7 + x, 3 + y, 239, 123, 24);
		gfx.PutPixel(8 + x, 3 + y, 239, 123, 24);
		gfx.PutPixel(9 + x, 3 + y, 239, 123, 24);
		gfx.PutPixel(10 + x, 3 + y, 239, 123, 24);
		gfx.PutPixel(11 + x, 3 + y, 239, 123, 24);
		gfx.PutPixel(12 + x, 3 + y, 239, 123, 24);
		gfx.PutPixel(13 + x, 3 + y, 239, 123, 24);
		gfx.PutPixel(14 + x, 3 + y, 239, 123, 24);
		gfx.PutPixel(15 + x, 3 + y, 181, 255, 90);
		gfx.PutPixel(17 + x, 3 + y, 255, 173, 90);
		gfx.PutPixel(18 + x, 3 + y, 255, 173, 90);
		gfx.PutPixel(1 + x, 4 + y, 255, 173, 90);
		gfx.PutPixel(2 + x, 4 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 4 + y, 239, 123, 24);
		gfx.PutPixel(5 + x, 4 + y, 239, 123, 24);
		gfx.PutPixel(6 + x, 4 + y, 239, 123, 24);
		gfx.PutPixel(7 + x, 4 + y, 239, 123, 24);
		gfx.PutPixel(8 + x, 4 + y, 239, 123, 24);
		gfx.PutPixel(9 + x, 4 + y, 239, 123, 24);
		gfx.PutPixel(10 + x, 4 + y, 239, 123, 24);
		gfx.PutPixel(11 + x, 4 + y, 239, 123, 24);
		gfx.PutPixel(12 + x, 4 + y, 239, 123, 24);
		gfx.PutPixel(13 + x, 4 + y, 239, 123, 24);
		gfx.PutPixel(14 + x, 4 + y, 239, 123, 24);
		gfx.PutPixel(15 + x, 4 + y, 239, 123, 24);
		gfx.PutPixel(17 + x, 4 + y, 255, 173, 90);
		gfx.PutPixel(18 + x, 4 + y, 255, 173, 90);
		gfx.PutPixel(1 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(2 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(3 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 5 + y, 239, 123, 24);
		gfx.PutPixel(5 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(6 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(7 + x, 5 + y, 181, 255, 90);
		gfx.PutPixel(8 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(9 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(10 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(11 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(12 + x, 5 + y, 181, 255, 90);
		gfx.PutPixel(13 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(14 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(15 + x, 5 + y, 239, 123, 24);
		gfx.PutPixel(16 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(17 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(18 + x, 5 + y, 255, 173, 90);
		gfx.PutPixel(1 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(2 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(3 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 6 + y, 239, 123, 24);
		gfx.PutPixel(5 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(6 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(7 + x, 6 + y, 239, 123, 24);
		gfx.PutPixel(8 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(9 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(10 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(11 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(12 + x, 6 + y, 239, 123, 24);
		gfx.PutPixel(13 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(14 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(15 + x, 6 + y, 239, 123, 24);
		gfx.PutPixel(16 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(17 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(18 + x, 6 + y, 255, 173, 90);
		gfx.PutPixel(3 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(5 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(6 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(7 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(8 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(9 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(10 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(11 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(12 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(13 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(14 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(15 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(16 + x, 7 + y, 255, 173, 90);
		gfx.PutPixel(17 + x, 7 + y, 239, 123, 24);
		gfx.PutPixel(18 + x, 7 + y, 239, 123, 24);
		gfx.PutPixel(3 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(5 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(6 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(7 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(8 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(9 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(10 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(11 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(12 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(13 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(14 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(15 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(16 + x, 8 + y, 255, 173, 90);
		gfx.PutPixel(17 + x, 8 + y, 239, 123, 24);
		gfx.PutPixel(18 + x, 8 + y, 239, 123, 24);
		gfx.PutPixel(4 + x, 9 + y, 181, 255, 90);
		gfx.PutPixel(5 + x, 9 + y, 181, 255, 90);
		gfx.PutPixel(6 + x, 9 + y, 181, 255, 90);
		gfx.PutPixel(7 + x, 9 + y, 255, 173, 90);
		gfx.PutPixel(8 + x, 9 + y, 255, 173, 90);
		gfx.PutPixel(9 + x, 9 + y, 239, 123, 24);
		gfx.PutPixel(10 + x, 9 + y, 239, 123, 24);
		gfx.PutPixel(11 + x, 9 + y, 239, 123, 24);
		gfx.PutPixel(12 + x, 9 + y, 255, 173, 90);
		gfx.PutPixel(13 + x, 9 + y, 255, 173, 90);
		gfx.PutPixel(14 + x, 9 + y, 255, 173, 90);
		gfx.PutPixel(15 + x, 9 + y, 181, 255, 90);
		gfx.PutPixel(16 + x, 9 + y, 181, 255, 90);
		gfx.PutPixel(17 + x, 9 + y, 239, 123, 24);
		gfx.PutPixel(18 + x, 9 + y, 239, 123, 24);
		gfx.PutPixel(1 + x, 10 + y, 239, 123, 24);
		gfx.PutPixel(2 + x, 10 + y, 239, 123, 24);
		gfx.PutPixel(3 + x, 10 + y, 239, 123, 24);
		gfx.PutPixel(4 + x, 10 + y, 239, 123, 24);
		gfx.PutPixel(5 + x, 10 + y, 239, 123, 24);
		gfx.PutPixel(6 + x, 10 + y, 239, 123, 24);
		gfx.PutPixel(7 + x, 10 + y, 239, 123, 24);
		gfx.PutPixel(8 + x, 10 + y, 255, 173, 90);
		gfx.PutPixel(9 + x, 10 + y, 255, 173, 90);
		gfx.PutPixel(10 + x, 10 + y, 255, 173, 90);
		gfx.PutPixel(11 + x, 10 + y, 255, 173, 90);
		gfx.PutPixel(12 + x, 10 + y, 255, 173, 90);
		gfx.PutPixel(13 + x, 10 + y, 181, 255, 90);
		gfx.PutPixel(14 + x, 10 + y, 181, 255, 90);
		gfx.PutPixel(15 + x, 10 + y, 181, 255, 90);
		gfx.PutPixel(16 + x, 10 + y, 239, 123, 24);
		gfx.PutPixel(17 + x, 10 + y, 239, 123, 24);
		gfx.PutPixel(18 + x, 10 + y, 239, 123, 24);
		gfx.PutPixel(19 + x, 10 + y, 239, 123, 24);
		gfx.PutPixel(0 + x, 11 + y, 239, 123, 24);
		gfx.PutPixel(1 + x, 11 + y, 239, 123, 24);
		gfx.PutPixel(2 + x, 11 + y, 239, 123, 24);
		gfx.PutPixel(3 + x, 11 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 11 + y, 239, 123, 24);
		gfx.PutPixel(5 + x, 11 + y, 239, 123, 24);
		gfx.PutPixel(6 + x, 11 + y, 239, 123, 24);
		gfx.PutPixel(7 + x, 11 + y, 239, 123, 24);
		gfx.PutPixel(8 + x, 11 + y, 239, 123, 24);
		gfx.PutPixel(9 + x, 11 + y, 181, 255, 90);
		gfx.PutPixel(10 + x, 11 + y, 181, 255, 90);
		gfx.PutPixel(11 + x, 11 + y, 181, 255, 90);
		gfx.PutPixel(12 + x, 11 + y, 181, 255, 90);
		gfx.PutPixel(13 + x, 11 + y, 181, 255, 90);
		gfx.PutPixel(14 + x, 11 + y, 181, 255, 90);
		gfx.PutPixel(15 + x, 11 + y, 181, 255, 90);
		gfx.PutPixel(16 + x, 11 + y, 255, 173, 90);
		gfx.PutPixel(17 + x, 11 + y, 239, 123, 24);
		gfx.PutPixel(18 + x, 11 + y, 239, 123, 24);
		gfx.PutPixel(19 + x, 11 + y, 239, 123, 24);
		gfx.PutPixel(0 + x, 12 + y, 239, 123, 24);
		gfx.PutPixel(1 + x, 12 + y, 255, 173, 90);
		gfx.PutPixel(2 + x, 12 + y, 255, 173, 90);
		gfx.PutPixel(3 + x, 12 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 12 + y, 255, 173, 90);
		gfx.PutPixel(5 + x, 12 + y, 239, 123, 24);
		gfx.PutPixel(6 + x, 12 + y, 239, 123, 24);
		gfx.PutPixel(7 + x, 12 + y, 239, 123, 24);
		gfx.PutPixel(8 + x, 12 + y, 255, 173, 90);
		gfx.PutPixel(9 + x, 12 + y, 239, 123, 24);
		gfx.PutPixel(10 + x, 12 + y, 239, 123, 24);
		gfx.PutPixel(11 + x, 12 + y, 239, 123, 24);
		gfx.PutPixel(12 + x, 12 + y, 181, 255, 90);
		gfx.PutPixel(13 + x, 12 + y, 181, 255, 90);
		gfx.PutPixel(14 + x, 12 + y, 181, 255, 90);
		gfx.PutPixel(15 + x, 12 + y, 255, 173, 90);
		gfx.PutPixel(16 + x, 12 + y, 255, 173, 90);
		gfx.PutPixel(17 + x, 12 + y, 255, 173, 90);
		gfx.PutPixel(18 + x, 12 + y, 255, 173, 90);
		gfx.PutPixel(19 + x, 12 + y, 239, 123, 24);
		gfx.PutPixel(0 + x, 13 + y, 239, 123, 24);
		gfx.PutPixel(1 + x, 13 + y, 255, 173, 90);
		gfx.PutPixel(2 + x, 13 + y, 255, 173, 90);
		gfx.PutPixel(3 + x, 13 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 13 + y, 255, 173, 90);
		gfx.PutPixel(5 + x, 13 + y, 239, 123, 24);
		gfx.PutPixel(6 + x, 13 + y, 239, 123, 24);
		gfx.PutPixel(7 + x, 13 + y, 239, 123, 24);
		gfx.PutPixel(8 + x, 13 + y, 255, 173, 90);
		gfx.PutPixel(9 + x, 13 + y, 239, 123, 24);
		gfx.PutPixel(10 + x, 13 + y, 239, 123, 24);
		gfx.PutPixel(11 + x, 13 + y, 239, 123, 24);
		gfx.PutPixel(12 + x, 13 + y, 181, 255, 90);
		gfx.PutPixel(13 + x, 13 + y, 181, 255, 90);
		gfx.PutPixel(14 + x, 13 + y, 181, 255, 90);
		gfx.PutPixel(15 + x, 13 + y, 255, 173, 90);
		gfx.PutPixel(16 + x, 13 + y, 255, 173, 90);
		gfx.PutPixel(17 + x, 13 + y, 255, 173, 90);
		gfx.PutPixel(18 + x, 13 + y, 255, 173, 90);
		gfx.PutPixel(19 + x, 13 + y, 239, 123, 24);
		gfx.PutPixel(0 + x, 14 + y, 239, 123, 24);
		gfx.PutPixel(1 + x, 14 + y, 239, 123, 24);
		gfx.PutPixel(2 + x, 14 + y, 239, 123, 24);
		gfx.PutPixel(3 + x, 14 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 14 + y, 239, 123, 24);
		gfx.PutPixel(5 + x, 14 + y, 239, 123, 24);
		gfx.PutPixel(6 + x, 14 + y, 239, 123, 24);
		gfx.PutPixel(7 + x, 14 + y, 239, 123, 24);
		gfx.PutPixel(8 + x, 14 + y, 255, 173, 90);
		gfx.PutPixel(9 + x, 14 + y, 181, 255, 90);
		gfx.PutPixel(10 + x, 14 + y, 181, 255, 90);
		gfx.PutPixel(11 + x, 14 + y, 239, 123, 24);
		gfx.PutPixel(12 + x, 14 + y, 239, 123, 24);
		gfx.PutPixel(13 + x, 14 + y, 239, 123, 24);
		gfx.PutPixel(14 + x, 14 + y, 239, 123, 24);
		gfx.PutPixel(15 + x, 14 + y, 239, 123, 24);
		gfx.PutPixel(16 + x, 14 + y, 255, 173, 90);
		gfx.PutPixel(17 + x, 14 + y, 255, 173, 90);
		gfx.PutPixel(18 + x, 14 + y, 255, 173, 90);
		gfx.PutPixel(19 + x, 14 + y, 255, 173, 90);
		gfx.PutPixel(0 + x, 15 + y, 239, 123, 24);
		gfx.PutPixel(1 + x, 15 + y, 239, 123, 24);
		gfx.PutPixel(2 + x, 15 + y, 239, 123, 24);
		gfx.PutPixel(3 + x, 15 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 15 + y, 239, 123, 24);
		gfx.PutPixel(5 + x, 15 + y, 239, 123, 24);
		gfx.PutPixel(6 + x, 15 + y, 239, 123, 24);
		gfx.PutPixel(7 + x, 15 + y, 239, 123, 24);
		gfx.PutPixel(8 + x, 15 + y, 255, 173, 90);
		gfx.PutPixel(9 + x, 15 + y, 239, 123, 24);
		gfx.PutPixel(10 + x, 15 + y, 239, 123, 24);
		gfx.PutPixel(11 + x, 15 + y, 239, 123, 24);
		gfx.PutPixel(12 + x, 15 + y, 181, 255, 90);
		gfx.PutPixel(13 + x, 15 + y, 181, 255, 90);
		gfx.PutPixel(14 + x, 15 + y, 181, 255, 90);
		gfx.PutPixel(15 + x, 15 + y, 181, 255, 90);
		gfx.PutPixel(16 + x, 15 + y, 181, 255, 90);
		gfx.PutPixel(17 + x, 15 + y, 255, 173, 90);
		gfx.PutPixel(18 + x, 15 + y, 255, 173, 90);
		gfx.PutPixel(0 + x, 16 + y, 239, 123, 24);
		gfx.PutPixel(1 + x, 16 + y, 239, 123, 24);
		gfx.PutPixel(2 + x, 16 + y, 239, 123, 24);
		gfx.PutPixel(3 + x, 16 + y, 239, 123, 24);
		gfx.PutPixel(4 + x, 16 + y, 239, 123, 24);
		gfx.PutPixel(5 + x, 16 + y, 239, 123, 24);
		gfx.PutPixel(6 + x, 16 + y, 239, 123, 24);
		gfx.PutPixel(7 + x, 16 + y, 239, 123, 24);
		gfx.PutPixel(8 + x, 16 + y, 255, 173, 90);
		gfx.PutPixel(9 + x, 16 + y, 181, 255, 90);
		gfx.PutPixel(10 + x, 16 + y, 181, 255, 90);
		gfx.PutPixel(11 + x, 16 + y, 181, 255, 90);
		gfx.PutPixel(12 + x, 16 + y, 181, 255, 90);
		gfx.PutPixel(13 + x, 16 + y, 181, 255, 90);
		gfx.PutPixel(14 + x, 16 + y, 181, 255, 90);
		gfx.PutPixel(15 + x, 16 + y, 181, 255, 90);
		gfx.PutPixel(1 + x, 17 + y, 255, 173, 90);
		gfx.PutPixel(2 + x, 17 + y, 255, 173, 90);
		gfx.PutPixel(3 + x, 17 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 17 + y, 255, 173, 90);
		gfx.PutPixel(5 + x, 17 + y, 255, 173, 90);
		gfx.PutPixel(6 + x, 17 + y, 255, 173, 90);
		gfx.PutPixel(7 + x, 17 + y, 255, 173, 90);
		gfx.PutPixel(8 + x, 17 + y, 239, 123, 24);
		gfx.PutPixel(12 + x, 17 + y, 239, 123, 24);
		gfx.PutPixel(13 + x, 17 + y, 239, 123, 24);
		gfx.PutPixel(14 + x, 17 + y, 239, 123, 24);
		gfx.PutPixel(15 + x, 17 + y, 239, 123, 24);
		gfx.PutPixel(1 + x, 18 + y, 255, 173, 90);
		gfx.PutPixel(2 + x, 18 + y, 255, 173, 90);
		gfx.PutPixel(3 + x, 18 + y, 255, 173, 90);
		gfx.PutPixel(4 + x, 18 + y, 255, 173, 90);
		gfx.PutPixel(5 + x, 18 + y, 255, 173, 90);
		gfx.PutPixel(6 + x, 18 + y, 255, 173, 90);
		gfx.PutPixel(7 + x, 18 + y, 255, 173, 90);
		gfx.PutPixel(8 + x, 18 + y, 239, 123, 24);
		gfx.PutPixel(12 + x, 18 + y, 239, 123, 24);
		gfx.PutPixel(13 + x, 18 + y, 239, 123, 24);
		gfx.PutPixel(14 + x, 18 + y, 239, 123, 24);
		gfx.PutPixel(15 + x, 18 + y, 239, 123, 24);
		gfx.PutPixel(5 + x, 19 + y, 239, 123, 24);
		gfx.PutPixel(6 + x, 19 + y, 239, 123, 24);
		gfx.PutPixel(7 + x, 19 + y, 239, 123, 24);
		gfx.PutPixel(8 + x, 19 + y, 239, 123, 24);

	

}

/*void Link::BlockStop(Block& block0)
{
	//in from left
	if (y >= block0.y && height <= block0.BlockHeight &&
		width > block0.x && x <= block0.BlockWidth - 10)
	{
		x = block0.x - 10;
	}
	
	//in from right Scores
	if (y >= block0.y && height <= block0.BlockHeight &&
		x < block0.BlockWidth && x >= block0.x + 2)
	{
		x = block0.BlockWidth;


	}

	//down from top
	if (x >= block0.x && x <= block0.BlockWidth - 1 &&
		height >= block0.y && y <= block0.BlockHeight - 3)

	{
		y = block0.y - 3;
	}

	//// up from bottom
	if (x >= block0.x && x <= block0.BlockWidth - 1 &&
		y + 2 >= block0.y && y <= block0.y + 10)

	{
		y = block0.BlockHeight;
	}
	
}*/
