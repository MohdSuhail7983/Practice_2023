#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

int main() {
    struct Box box;
    struct Box *ptrBox = &box;

    
    (*ptrBox).length = 2.5;
    (*ptrBox).width = 3.0;
    (*ptrBox).height = 4.0;

    
    double volume = (*ptrBox).length * (*ptrBox).width * (*ptrBox).height;
    double surfaceArea = 2 * ((*ptrBox).length * (*ptrBox).width + (*ptrBox).length * (*ptrBox).height + (*ptrBox).width * (*ptrBox).height);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);


    ptrBox->length = 2.5;
    ptrBox->width = 3.0;
    ptrBox->height = 4.0;

 
    volume = ptrBox->length * ptrBox->width * ptrBox->height;
    surfaceArea = 2 * (ptrBox->length * ptrBox->width + ptrBox->length * ptrBox->height + ptrBox->width * ptrBox->height);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}