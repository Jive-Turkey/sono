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
  SDL_Texture* loadTexture(const std::string &file, SDL_Renderer *ren);
  void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, SDL_Rect dst, SDL_Rect *clip);
  void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, int x, int y, SDL_Rect *clip);
  SonoCode CreateWindow();
  SonoCode CreateRenderer(SDL_Window *window);

public:
  Sono();
  ~Sono();

};

#endif
