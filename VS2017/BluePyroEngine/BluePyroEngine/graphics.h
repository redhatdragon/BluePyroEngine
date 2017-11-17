#ifndef GRAPHICS_H
#define GRAPHICS_H
#include <SDL\SDL.h>
#include <GL\glew.h>

SDL_Window *m_window;
SDL_GLContext m_glContext;
bool BPIsWindowRunning;

void BPGraphicsSetup(int _width, int _height) {
	BPIsWindowRunning = true;
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 32);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

	m_window = SDL_CreateWindow("", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,_width,_height,SDL_WINDOW_OPENGL);
	m_glContext = SDL_GL_CreateContext(m_window);

	GLenum status = glewInit();
	if(status != GLEW_OK){printf("error: Failed to init glew!"); }
}

void BPGraphicsUpdate() {
	SDL_Event e;
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	SDL_GL_SwapWindow(m_window);
	while(SDL_PollEvent(&e)){
		if(e.type == SDL_QUIT){
			BPIsWindowRunning = false;
		}
	}

}

void BPGraphicsEnd() {
	SDL_GL_DeleteContext(m_glContext);
	SDL_DestroyWindow(m_window);
	SDL_Quit();
}
#endif
