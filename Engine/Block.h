#pragma once
#include "Graphics.h"
#include "Link.h"
class Block
{
public:
	void Draw(Graphics& gfx);

	void BlockStop( Link& link) const;


	int x;
	int y;
	static constexpr int width = 31;
	static constexpr int height = 32;
	
};

