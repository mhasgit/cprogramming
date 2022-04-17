vpath %.c src\*
vpath %.c src\Arrays
vpath %.c src\Chapter_8\Exercises
vpath %.c src\Chapter_8\Projects
vpath %.h include

CPPFLAGS = -I include

all: runner chapter_8_1 chapter_8_2 chapter_8_3

runner: runner.o array_chapter.o char-helper.o
	gcc $(CPPFLAGS) $^ -o build\runner.exe

# Chapter Projects
chapter_8_1: Project_1.o
	gcc $(CPPFLAGS) $^ -o build\$@.exe

chapter_8_2: Project_2.o
	gcc $(CPPFLAGS) $^ -o build\$@.exe

chapter_8_3: Project_3.o
	gcc $(CPPFLAGS) $^ -o build\$@.exe

array_chapter.o: array_chapter.h

char-helper.o: char-helper.h



%.o: %.c
	gcc $(CPPFLAGS) -c $^

clean: 
	clean.bat
