
#include "initialisation.h"
#include "objet.h"

positionV = 621;
positionH = 34;

void image() {
	SDL_Surface* img = NULL;
	SDL_Texture* textu = NULL;
	img = SDL_LoadBMP("Magikarp.bmp");
	if (!img)
	{
		printf("Erreur de chargement de l'image : %s", SDL_GetError());
		return -1;
	}
	textu = SDL_CreateTextureFromSurface(render, img);
	if (!textu)
	{
		printf("Erreur de creation de la texture : %s", SDL_GetError());
		SDL_FreeSurface(img);
		return -1;
	}

	SDL_Rect magikarp = {375, 275, 50, 50};
	SDL_RenderCopy(render, textu, NULL, &magikarp);
	SDL_FreeSurface(img);
}

void Rectangle(){
	SDL_Rect rectangle = { positionV, positionH, 85, 85 };
	SDL_SetRenderDrawColor(render, 150, 131, 236, 255);
	SDL_RenderFillRect(render, &rectangle);
}

void Deplacement() {
	
	SDL_Event Event;
	while (SDL_PollEvent(&Event)) {
		if (Event.type == SDL_KEYDOWN) {
			if (Event.key.keysym.sym == SDLK_UP) {
				positionH -= 10;
			}
			if (Event.key.keysym.sym == SDLK_DOWN) {
				positionH += 10;
			}
			if (Event.key.keysym.sym == SDLK_RIGHT) {
				positionV += 10;
			}
			if (Event.key.keysym.sym == SDLK_LEFT) {
				positionV -= 10;
			}
		}
	}
}