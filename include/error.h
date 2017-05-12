#ifndef ERROR_H
#define ERROR_H

enum SonoCode {
  OK = 0,
  SDL_ERROR = 1,
  FILE_ERROR,
};

/*
 * Log an SDL error with some error message to the output stream of our choice
 * @param os The output stream to write the message too
 * @param msg The error message to write, format will be msg error: SDL_GetError()
 */
void logSDLError(std::ostream &os, const std::string &msg){
	os << msg << " error: " << SDL_GetError() << std::endl;
}

#endif
