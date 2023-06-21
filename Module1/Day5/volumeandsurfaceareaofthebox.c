#include <stdio.h>

struct Box {
    int length;
    int width;
    int height;
};
typedef struct Box box;

int calculateVolume(box* ptr)
{
    return ptr->length * ptr->width * ptr->height;
}
int calculateSurfaceArea(box* ptr)
{
    return 2 * (ptr->length * ptr->width + ptr->length * ptr->height + ptr->width * ptr->height);
}
int main() {
    box a;
    box* ptr = &a;

    printf("Enter the length, width, and height of the box: ");
    scanf("%d %d %d", &(ptr->length), &(ptr->width), &(ptr->height));

    int volume = calculateVolume(ptr);
    printf("Volume of the box is: %d\n", volume);

    int surfaceArea = calculateSurfaceArea(ptr);
    printf("Surface area of the box is: %d\n", surfaceArea);

    return 0;
}



