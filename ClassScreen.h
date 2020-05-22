#ifndef ClassScreen_H
#define ClassScreen_H
#include <SDL.h>
#include <SDL_ttf.h>
#include <iostream>
using namespace std;
class ClassScreen
{
private:
	ClassScreen();
	char autor[50];
	int year, page;
	char anot[200];
	char genre[50];
	int SCREEN_WIDTH;
	int SCREEN_HEIGTH;
	SDL_Window *window{ nullptr };
	SDL_Color col;
	SDL_Rect dest;
	SDL_Renderer *renderer;
	SDL_Surface *text;
	SDL_Texture *background = nullptr, *disk1 = nullptr, *disk2 = nullptr, *disk3 = nullptr, *disk4 = nullptr, *disk5 = nullptr, *disk6 = nullptr, *textt=nullptr, *op=nullptr;	
	static ClassScreen *s;	

public:
	
	static ClassScreen *getinstance();
	SDL_Texture* LoadImage(std::string file);
	void ApplySurface(int x, int y, SDL_Texture *tex, SDL_Renderer *rend);
	void begin(int *arr1, int *arr2, int *arr3, int kol);
	void refresh(int *arr1, int *arr2, int *arr3, int kol, int hod);
	void init();
	bool win(int *arr2, int *arr3, int kol, int hod);
	void exit();

	
	

};
#endif
