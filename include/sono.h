#ifndef SONO_H
#define SONO_H

#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include "error.h"
#include "sprite.h"

class Sono {

private:
  SDL_Renderer* renderer;

  void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, SDL_Rect dst, SDL_Rect *clip);
  void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, int x, int y, SDL_Rect *clip);
  void Render(SDL_Renderer *renderer);
  SDL_Window* CreateWindow();
  SDL_Renderer* CreateRenderer(SDL_Window *window);

public:
  Sono();
  ~Sono();

};

#endif
