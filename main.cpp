#include <iostream>
#include <SDL.h>
#include "ClassScreen.h"

using namespace std;
bool perem(int buf, int *arr1, int *arr2, int *arr3, int kol, int m)
{		
			switch (m)
			{
			case 1:
				
				for (int i = kol-1; i >= 0; i--)
				{
					if (arr1[i] == 0)
					{
						if ((i == kol - 1) || (buf <= arr1[i + 1]))
						{
							arr1[i] = buf;
							return true;
						}
					}
				}
				break;
			case 2:
			
				for (int i = kol - 1; i >= 0; i--)
				{
					if (arr2[i] == 0)
					{
						if ((i == kol - 1) || (buf <= arr2[i + 1]))
						{
							arr2[i] = buf;
							return true;
						}
					}
				}				
				break;
			case 3:
				
				for (int i = kol-1; i >= 0; i--)
				{
					if (arr3[i] == 0)
					{
						if ((i == kol - 1) || (buf <= arr3[i + 1]))
						{
							arr3[i] = buf;
							return true;
						}

					}
				}
				break;
			}
			return false;

}

int main(int argc, char * argv[])
{
	ClassScreen *s = s->getinstance();
	
	int kol=0, x, y, *arr1, *arr2, *arr3, buf, m = 0, pos, hod = 0;
	bool per = false;
	bool ent = false;
	string kols;
	bool quit = false;
	bool l = false;
	int bW, bH;
	SDL_Event e;
	quit = false;
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	}	
	s->init();	
	while (!quit)
	{
		if (ent)
		{
			if (l == false)
			{
				l = s->win(arr2, arr3, kol, hod);
			}
		}
		while (SDL_PollEvent(&e))
		{
			if (!ent)
			{
				if (e.type == SDL_KEYUP)
				{
					switch (e.key.keysym.sym)
					{					
					case SDLK_ESCAPE:
						quit = true;
						break;
					case SDLK_3:
						ent = true;
						kol = 3;
						arr1 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr1[i] = i + 1;
						}
						arr2 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr2[i] = 0;
						}
						arr3 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr3[i] = 0;
						}
						s->begin(arr1, arr2, arr3, kol);
						break;
					case SDLK_KP_3:
						ent = true;
						kol = 3;
						arr1 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr1[i] = i + 1;
						}
						arr2 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr2[i] = 0;
						}
						arr3 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr3[i] = 0;
						}
						s->begin(arr1, arr2, arr3, kol);
						break;
					case SDLK_4:
						ent = true;
						kol = 4;
						arr1 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr1[i] = i + 1;
						}
						arr2 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr2[i] = 0;
						}
						arr3 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr3[i] = 0;
						}
						s->begin(arr1, arr2, arr3, kol);
						break;
					case SDLK_KP_4:
						ent = true;
						kol = 4;
						arr1 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr1[i] = i + 1;
						}
						arr2 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr2[i] = 0;
						}
						arr3 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr3[i] = 0;
						}
						s->begin(arr1, arr2, arr3, kol);
						break;
					case SDLK_5:
						ent = true;
						kol = 5;
						arr1 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr1[i] = i + 1;
						}
						arr2 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr2[i] = 0;
						}
						arr3 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr3[i] = 0;
						}
						s->begin(arr1, arr2, arr3, kol);
						break;
					case SDLK_KP_5:
						ent = true;
						kol = 5;
						arr1 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr1[i] = i + 1;
						}
						arr2 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr2[i] = 0;
						}

						arr3 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr3[i] = 0;
						}
						s->begin(arr1, arr2, arr3, kol);
						break;
					case SDLK_6:
						ent = true;
						kol = 6;
						arr1 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr1[i] = i + 1;
						}
						arr2 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr2[i] = 0;
						}
						arr3 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr3[i] = 0;
						}
						s->begin(arr1, arr2, arr3, kol);
						break;
					case SDLK_KP_6:
						ent = true;
						kol = 6;
						arr1 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr1[i] = i + 1;
						}
						arr2 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr2[i] = 0;
						}
						arr3 = new int[kol];
						for (int i = 0; i < kol; i++) {
							arr3[i] = 0;
						}
						s->begin(arr1, arr2, arr3, kol);
						break;
					}
				}
			}
			else
			{
				if (e.type == SDL_KEYUP)
				{
					switch (e.key.keysym.sym)
					{
					case SDLK_ESCAPE:
						quit = true;
						break;
					case SDLK_1:
						if (per == false)
						{							
							for (int i = 0; i < kol; i++)
							{								
								if (arr1[i] != 0)
								{
									buf = arr1[i];
									m = 1;
									pos = i;
									arr1[i] = 0;
									per = true;
									break;
								}
							}
						}
						else
						{							
							if (perem(buf, arr1, arr2, arr3, kol, 1) == false)
							{
								switch (m)
								{
								case 1:
									arr1[pos] = buf;
									break;
								case 2:
									arr2[pos] = buf;
									break;
								case 3:
									arr3[pos] = buf;
									break;
								}
							}
							else
							{hod++;}
							buf = 0;
							m = 0;
							pos = 0;
							per = false;
							s->refresh(arr1, arr2, arr3, kol, hod);
						}
							break;
					case SDLK_KP_1:
						if (per == false)
						{							
							for (int i = 0; i < kol; i++)
							{
								if (arr1[i] != 0)
								{
									buf = arr1[i];
									m = 1;
									pos = i;
									arr1[i] = 0;
									per = true;
									break;
								}
							}
						}
						else
						{							
							if (perem(buf, arr1, arr2, arr3, kol, 1) == false)
							{
								switch (m)
								{
								case 1:
									arr1[pos] = buf;
									break;
								case 2:
									arr2[pos] = buf;
									break;
								case 3:
									arr3[pos] = buf;
									break;
								}
							}
							else
							{hod++;}
							buf = 0;
							m = 0;
							pos = 0;
							per = false;
							s->refresh(arr1, arr2, arr3, kol, hod);
						}
						break;
					case SDLK_2:
						if (per == false)
						{							
							for (int i = 0; i < kol; i++)
							{
								if (arr2[i] != 0)
								{
									buf = arr2[i];
									m = 2;
									pos = i;
									arr2[i] = 0;
									per = true;
									break;
								}
							}
						}
						else
						{							
							if (perem(buf, arr1, arr2, arr3, kol, 2) == false)
							{
								switch (m)
								{
								case 1:
									arr1[pos] = buf;
									break;
								case 2:
									arr2[pos] = buf;
									break;
								case 3:
									arr3[pos] = buf;
									break;
								}
							}
							else
							{hod++;}
							buf = 0;
							m = 0;
							pos = 0;
							per = false;
							s->refresh(arr1, arr2, arr3, kol, hod);
						}
						break;
					case SDLK_KP_2:
						if (per == false)
						{							
							for (int i = 0; i < kol; i++)
							{
								if (arr2[i] != 0)
								{
									buf = arr2[i];
									m = 2;
									pos = i;
									arr2[i] = 0;
									per = true;
									break;
								}
							}
						}
						else
						{							
							if (perem(buf, arr1, arr2, arr3, kol, 2) == false)
							{
								switch (m)
								{
								case 1:
									arr1[pos] = buf;
									break;
								case 2:
									arr2[pos] = buf;
									break;
								case 3:
									arr3[pos] = buf;
									break;
								}
							}
							else
							{hod++;}
							buf = 0;
							m = 0;
							pos = 0;
							per = false;
							s->refresh(arr1, arr2, arr3, kol, hod);
						}
						break;
					case SDLK_3:
						if (per == false)
						{							
							for (int i = 0; i < kol; i++)
							{
								if (arr3[i] != 0)
								{
									buf = arr3[i];
									m = 3;
									pos = i;
									arr3[i] = 0;
									per = true;
									break;
								}
							}
						}
						else
						{							
							if (perem(buf, arr1, arr2, arr3, kol, 3) == false)
							{
								switch (m)
								{
								case 1:
									arr1[pos] = buf;
									break;
								case 2:
									arr2[pos] = buf;
									break;
								case 3:
									arr3[pos] = buf;
									break;
								}
							}
							else
							{hod++;}
							buf = 0;
							m = 0;
							pos = 0;
							per = false;
							s->refresh(arr1, arr2, arr3, kol, hod);
						}
						break;
					case SDLK_KP_3:
						if (per == false)
						{							
							for (int i = 0; i < kol; i++)
							{
								if (arr3[i] != 0)
								{
									buf = arr3[i];
									m = 3;
									pos = i;
									arr3[i] = 0;
									per = true;
									break;
								}
							}
						}
						else
						{							
							if (perem(buf, arr1, arr2, arr3, kol, 3) == false)
							{
								switch (m)
								{
								case 1:
									arr1[pos] = buf;
									break;
								case 2:
									arr2[pos] = buf;
									break;
								case 3:
									arr3[pos] = buf;
									break;
								}
							}
							else
							{hod++;}
							buf = 0;
							m = 0;
							pos = 0;
							per = false;
							s->refresh(arr1, arr2, arr3, kol, hod);
						}
						break;						
					}
				}
			}
		}
	}
		s->exit();
		TTF_Quit();
		SDL_Quit();
		return 1;	
}
