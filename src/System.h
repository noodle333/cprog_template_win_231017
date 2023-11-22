#ifndef SYSTEM_H
#define SYSTEM_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

namespace CWing
{
    class System
    {
    public:
        System();
        ~System();
        SDL_Renderer *get_ren() const;
        TTF_Font *get_font() const;

    private:
        SDL_Window *window;
        SDL_Renderer *renderer;
        TTF_Font *font;
    };

    extern System system;
}

#endif