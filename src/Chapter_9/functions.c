#include <stdio.h>
#include <conio.h>

int get_box_volume(int length, int width, int height)
{
    return width * length * height;
}

int get_box_dimension(int volume)
{

    return (volume + 165) / 166;
}

int main(void)
{
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;

    int volume = get_box_volume(length, width, height);

    printf("Dimension of the Box : %dx%dx%d\n", width, length, height);
    printf("volume (cubic inches) of a box: %d\n", volume);
    printf("dimension weight of a box (pound): %d\n", get_box_dimension(volume));
    
    getch();
    
    return 0;
}