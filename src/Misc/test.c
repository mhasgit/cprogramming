#include <stdio.h>
#include <conio.h>

int main(void)
{
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;
    volume = width * length * height;
    weight = (volume + 165) / 166;

    printf("Dimension of the Box : %dx%dx%d\n", width, length, height);
    printf("volume (cubic inches) of a box: %d\n", volume);
    printf("dimension weight of a box (pound): %d\n", weight);
    
    getch();
    
    return 0;
}