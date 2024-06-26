
#include "initialisation.h"

// Initialisation de la SDL
void init() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Erreur lors de l'initialisation de la SDL : %s\n", SDL_GetError());
        return -1;
    }
}


// Cr�ation de la fen�tre
void window() {
    wind = SDL_CreateWindow("SDL Project",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        800, 600, SDL_WINDOW_SHOWN);
    if (wind == NULL) {
        printf("Erreur lors de la cr�ation de la fen�tre : %s\n", SDL_GetError());
        SDL_Quit();
        return -1;
    }
}

void renderer() {
    render = SDL_CreateRenderer(wind, -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (render == NULL) {
        printf("Erreur creation rendu SDL\n");
        SDL_DestroyWindow(wind);
        SDL_Quit();
        return -1;
    }
}

void fermer() {
    SDL_DestroyRenderer(render);
    SDL_DestroyWindow(wind);
    SDL_Quit();
}
