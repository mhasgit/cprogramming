all: runner.o array_chapter.o
	gcc -o runner.exe runner.o array_chapter.o

runner.o: runner.c
	gcc -c runner.c

array_chapter.o: array_chapter.h array_chapter.c
	gcc -c array_chapter.c
