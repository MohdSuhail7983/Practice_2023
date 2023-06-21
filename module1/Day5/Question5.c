#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapFields(struct Point* p1, struct Point* p2) {
    int tempX = p1->x;
    int tempY = p1->y;

    p1->x = p2->x;
    p1->y = p2->y;

    p2->x = tempX;
    p2->y = tempY;
}

int main() {
    struct Point point1 = {10, 20};
    struct Point point2 = {30, 40};

    printf("Before swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    swapFields(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}