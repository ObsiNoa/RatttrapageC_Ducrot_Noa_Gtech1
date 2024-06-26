#pragma once

#include "initialisation.h"

int main(int argc, char* argv[]) {

    init();
    window();
    renderer();
    while (1) {
        SDL_SetRenderDrawColor(render, 0, 0, 0, 255);
        SDL_RenderClear(render);
        image();
        Rectangle();
        Deplacement();
        SDL_RenderPresent(render);
        SDL_Delay(10);
    }

    fermer();

    return 0;
}