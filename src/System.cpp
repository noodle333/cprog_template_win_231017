#include "System.h"
#include <SDL2/SDL.h>

namespace CWing
{
    System::System()
    {
        SDL_Init(SDL_INIT_EVERYTHING);
        window = SDL_CreateWindow("Cwing", SDL_WINDOWPOS_CENTERED, 800, 600, 0, 255);
        renderer = SDL_CreateRenderer(window, -1, 0);
        TTF_Init();
    }

    System::~System()
    {
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
    }

    SDL_Renderer *System::get_ren() const
    {
        return renderer;
    }

    System system;
}

#include "System.h"
