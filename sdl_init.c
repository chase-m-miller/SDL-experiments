#include <SDL2/SDL_error.h>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_version.h>

int main(void) {
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		printf("Error Initializing SDL: %s\n", SDL_GetError());
		return 0;
	}
	printf("SDL successfully initialized!\n");
	SDL_version *ver;
	SDL_GetVersion(ver);
	printf("%d.%d.%d\n", ver->major, ver->minor, ver->patch);

	SDL_Quit();
	return 0;
}
