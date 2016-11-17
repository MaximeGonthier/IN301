all: principal
	./principal

principal: principal.o circonference.o surface.o affiche.o 
	gcc -Wall -o principal principal.o circonference.o surface.o affiche.o -luvsqgraphics `sdl-config --libs` -lm -lSDL_ttf

principal.o: principal.c circonference.h surface.h pi.h affiche.h graphics.h
	gcc -c -Wall principal.c `sdl-config --cflags`

circonference.o: circonference.c circonference.h pi.h
	gcc -c -Wall circonference.c

surface.o: surface.c surface.h pi.h
	gcc -c -Wall surface.c
	
affiche.o: affiche.c affiche.h graphics.h
	gcc -c -Wall `sdl-config --cflags` affiche.c

clean:
	rm -f principal
	rm -f principal.o
	rm -f circonference.o
	rm -f surface.o
	rm -f affiche.o
