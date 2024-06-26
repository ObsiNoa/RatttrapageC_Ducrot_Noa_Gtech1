#pragma once
#include <stdio.h>
#include <SDL.h>
#include <stdlib.h>
#include "objet.h"

SDL_Window* wind;
SDL_Renderer* render;   
void init();
void window();
void renderer();
void fermer();
void image();
void Rectangle();
void Deplacement();