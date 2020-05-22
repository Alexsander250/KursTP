#include "ClassScreen.h"
#include <SDL_ttf.h>
ClassScreen::ClassScreen()
{
	SCREEN_WIDTH = 1920;
	SCREEN_HEIGTH = 1080;
	col = { 255,50,40,0 };
	dest = { 50, 0, 0,0 };
}
ClassScreen * ClassScreen::getinstance()
{
	if (!s) {
		s = new ClassScreen;		
	}
	ClassScreen s;
	return &s;
}
SDL_Texture * ClassScreen::LoadImage(std::string file)
{
	SDL_Surface *loadedImage = nullptr;
	SDL_Texture *texture = nullptr;
	loadedImage = SDL_LoadBMP(file.c_str());
	if (loadedImage != nullptr) {
		texture = SDL_CreateTextureFromSurface(renderer, loadedImage);
		SDL_FreeSurface(loadedImage);
	}
	else
		std::cout << SDL_GetError() << std::endl;
	return texture;	
}
void ClassScreen::ApplySurface(int x, int y, SDL_Texture * tex, SDL_Renderer * rend)
{
	SDL_Rect pos;
	pos.x = x;
	pos.y = y;
	SDL_QueryTexture(tex, NULL, NULL, &pos.w, &pos.h);
	SDL_RenderCopy(rend, tex, NULL, &pos);
}

void ClassScreen::begin(int * arr1, int * arr2, int * arr3, int kol)
{
	int iW, iH;
	int hod = 0;
	for (int i = 1; i != kol + 1; i++)
	{
		switch (i)
		{
		case 1:
			disk1 = LoadImage("../bmp/Disk1.bmp");
			break;
		case 2:
			disk2 = LoadImage("../bmp/Disk2.bmp");
			break;
		case 3:
			disk3 = LoadImage("../bmp/Disk3.bmp");
			break;
		case 4:
			disk4 = LoadImage("../bmp/Disk4.bmp");
			break;
		case 5:
			disk5 = LoadImage("../bmp/Disk5.bmp");
			break;
		case 6:
			disk6 = LoadImage("../bmp/Disk6.bmp");
			break;
		}
	}
	refresh(arr1, arr2, arr3, kol, hod);
}
void ClassScreen::refresh(int * arr1, int * arr2, int * arr3, int kol, int hod)

{
	int iW, iH, x, y;
	int bW, bH;
	SDL_RenderClear(renderer);
	SDL_QueryTexture(background, NULL, NULL, &bW, &bH);
	ApplySurface(0, 0, background, renderer);
	SDL_RenderPresent(renderer);
	for (int i = kol; i > -1; i--)
	{
		if (arr1[i] != 0)
		{
			switch (arr1[i])
			{
			case 1:
				SDL_QueryTexture(disk1, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2) - 600;
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk1, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 2:
				SDL_QueryTexture(disk2, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2) - 600;
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk2, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 3:
				SDL_QueryTexture(disk3, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2) - 600;
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk3, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 4:
				SDL_QueryTexture(disk4, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2) - 600;
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk4, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 5:
				SDL_QueryTexture(disk5, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2) - 600;
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk5, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 6:
				SDL_QueryTexture(disk6, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2) - 600;
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk6, renderer);
				SDL_RenderPresent(renderer);
				break;
			}
		}
		if (arr2[i] != 0)
		{
			switch (arr2[i])
			{
			case 1:
				SDL_QueryTexture(disk1, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2);
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk1, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 2:
				SDL_QueryTexture(disk2, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2);
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk2, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 3:
				SDL_QueryTexture(disk3, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2);
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk3, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 4:
				SDL_QueryTexture(disk4, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2);
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk4, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 5:
				SDL_QueryTexture(disk5, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2);
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk5, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 6:
				SDL_QueryTexture(disk6, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2);
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk6, renderer);
				SDL_RenderPresent(renderer);
				break;
			}
		}
		if (arr3[i] != 0)
		{
			switch (arr3[i])
			{
			case 1:
				SDL_QueryTexture(disk1, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2) + 600;
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk1, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 2:
				SDL_QueryTexture(disk2, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2) + 600;
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk2, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 3:
				SDL_QueryTexture(disk3, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2) + 600;
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk3, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 4:
				SDL_QueryTexture(disk4, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2) + 600;
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk4, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 5:
				SDL_QueryTexture(disk5, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2) + 600;
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk5, renderer);
				SDL_RenderPresent(renderer);
				break;
			case 6:
				SDL_QueryTexture(disk6, NULL, NULL, &iW, &iH);
				x = (SCREEN_WIDTH / 2 - iW / 2) + 600;
				y = (SCREEN_HEIGTH / 2 - iH / 2) + (50 * i);
				ApplySurface(x, y, disk6, renderer);
				SDL_RenderPresent(renderer);
				break;
			}
		}
	}
	char st[10];
	sprintf(st, "%d", hod);	
	string str = "Moves made = ";
	str=str + st;
	SDL_Rect dest = { 80, 120, 0,0 };
	TTF_Font* font = TTF_OpenFont("sample.ttf", 50);
	text = TTF_RenderText_Solid(font, str.c_str(), col);
	textt = SDL_CreateTextureFromSurface(renderer, text);
	SDL_QueryTexture(textt, NULL, NULL, &iW, &iH);
	x = (SCREEN_WIDTH / 2 - iW / 2)-700;
	y = (SCREEN_HEIGTH / 2 - iH / 2)-300;
	ApplySurface(x, y, textt, renderer);	
	SDL_RenderPresent(renderer);	
}
void ClassScreen::init()
{
	window = SDL_CreateWindow("Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGTH, SDL_WINDOW_SHOWN);
	if (window == nullptr)
	{
		cout << "SDL_CreateWindow Error:" << SDL_GetError() << endl;
	}
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (renderer == nullptr) {
		std::cout << "SDL_CreateRenderer Error: " << SDL_GetError() << std::endl;		
	}	
	TTF_Init();
	background = LoadImage("../bmp/op.bmp");
	op= LoadImage("../bmp/op1.bmp");
	int bW, bH;
	SDL_RenderClear(renderer);
	SDL_QueryTexture(op, NULL, NULL, &bW, &bH);
	ApplySurface(0, 0, op, renderer);
	SDL_RenderPresent(renderer);	
}

bool ClassScreen::win(int * arr2, int * arr3, int kol, int hod)
{
	int iW = 1920, iH = 1080, x, y;
	if (arr2[0] == 1 || arr3[0] == 1)
	{
		SDL_RenderClear(renderer);
		background = LoadImage("../bmp/win.bmp");
		SDL_QueryTexture(background, NULL, NULL, &iW, &iH);
		x = (SCREEN_WIDTH / 2 - iW / 2);
		y = (SCREEN_HEIGTH / 2 - iH / 2);
		ApplySurface(x, y, background, renderer);		
		char st[10];
		sprintf(st, "%d", hod);
		string str = "Moves made = ";
		str = str + st;
		SDL_Rect dest = { 80, 120, 0,0 };
		TTF_Font* font = TTF_OpenFont("sample.ttf", 50);
		text = TTF_RenderText_Solid(font, str.c_str(), col);
		textt = SDL_CreateTextureFromSurface(renderer, text);
		SDL_QueryTexture(textt, NULL, NULL, &iW, &iH);
		x = (SCREEN_WIDTH / 2 - iW / 2) -700;
		y = (SCREEN_HEIGTH / 2 - iH / 2) - 300;
		ApplySurface(x, y, textt, renderer);
		SDL_RenderPresent(renderer);
		return true;
	}
	else
	{		return false;	}
}
void ClassScreen::exit()
{
	SDL_DestroyTexture(background);
	SDL_DestroyTexture(disk1);
	SDL_DestroyTexture(disk2);
	SDL_DestroyTexture(disk3);
	SDL_DestroyTexture(disk4);
	SDL_DestroyTexture(disk5);
	SDL_DestroyTexture(disk6);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}
