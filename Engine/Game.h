/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Link.h"
#include "Bat.h"
#include "Rupee.h"
#include "Block.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();

	/********************************/
	/*  User Functions              */
	void DrawTitle(int x, int y);
	void DrawGameOver(int x, int y);
	void DrawGameWin(int x, int y);
	void DrawGameWinL(int x, int y);
	
	/********************************/

private:
	MainWindow& wnd;
	Graphics gfx;

	/********************************/
	/*  User Variables              */
	//hero
	Link link;
	
	//money
	Rupee rupee0;
	Rupee rupee1;
	Rupee rupee2;
	Rupee rupee3;
	Rupee rupee4;
	Rupee rupee5;
	
	//enemies
	Bat bat0;
	Bat bat1;
	Bat bat2;
	Bat bat3;

	//other
	Block block0;
	Block block1;
	Block block2;
	Block block3;

	bool isStarted = false;
	bool GameOver = false;
	bool GameWin = false;
	
	/********************************/
};