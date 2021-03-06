#include <SDL.h>
#include <stdio.h>

const int SCREEN_WIDTH = 320;
const int SCREEN_HEIGHT = 240;

#include "Globals.h"

int updateGameState(float deltaTime) {
	// TODO
	return 0;
}

int main(int argc, char ** argv)
{
	//The window we'll be rendering to
	SDL_Window* window = NULL;

	//The surface contained by the window
	SDL_Surface* screenSurface = NULL;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		//Create window
		window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}
		else
		{
			//Get window surface
			screenSurface = SDL_GetWindowSurface(window);

			//Fill the surface white
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

			//Update the surface
			SDL_UpdateWindowSurface(window);

			char *s; // ST00_4@3

			g_args = 0;
			//TheProcesseur = DetectCpu();
			//MakeMyRand(1);
			//MusicCdActive = OptionMusicCdActive;
			/*if (OptionMusicCdActive)
			{
				puts("CD ROM's Initialization.");
				InitMusic();
				OptionMusicCdActive = MusicCdActive;
			}*/
			g_input_mode = 1;
			//Init_Clavier();
			//InitMemoryVariable();
			//sprite_clipping(0, 320, 0, 200);
			//INIT_MOTEUR_BEGIN();
			//FIRST_INIT();
			int result = updateGameState(g_deltaTime);

			//Wait two seconds
			SDL_Delay(2000);
		}
	}

	//Destroy window
	SDL_DestroyWindow(window);

	//Quit SDL subsystems
	SDL_Quit();

	return 0;
}