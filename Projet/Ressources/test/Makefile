all: test
	./test

test : affichagetest.o
	gcc -o test -Wall affichagetest.o -luvsqgraphics `sdl-config --libs` -lm -lSDL_ttf

affichagetest.o: affichagetest.c
	gcc -c -Wall `sdl-config --cflags` affichagetest.c

clean:
	rm -f test
	rm -f affichagetest.o
