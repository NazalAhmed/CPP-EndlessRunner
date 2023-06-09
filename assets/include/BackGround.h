#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class BackGround{
    public:
        BackGround(SDL_Renderer* renderer);

        void draw(SDL_Renderer* renderer);
    
    private:
        SDL_Texture* skyTexture;
        SDL_Texture* groundTexture;
};
