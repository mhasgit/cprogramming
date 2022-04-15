all: runner.o array_chapter.o char-helper.o
	gcc $^ -o runner.exe

runner.o: runner.c
	gcc -c $^

array_chapter.o: array_chapter.c
	gcc -c $^

char-helper.o: char-helper.c
	gcc -c $^

clean: 
	del *.o
	del *.exe
	del *.e