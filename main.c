/* Listing 3 Examples of using the Shape class in C (file main.c) */
#include "shape.h" /* Shape class interface */
#include <stdio.h> /* for printf() */

int main()
{
    Shape s1,s2; /*multiple instances of Shape*/

    Shape_ctor(&s1, 0, 1);
    Shape_ctor(&s2, -1, 2);

    printf("Shape s1(x=%d,y=%d)\n", s1.x, s1.y);
    printf("Shape s2(x=%d,y=%d)\n", s2.x, s2.y);

    Shape_moveBy(&s1, 2, -4);
    Shape_moveBy(&s2, 1, -2);

    printf("Shape s1(x=%d,y=%d)\n", s1.x, s1.y);
    printf("Shape s2(x=%d,y=%d)\n", s2.x, s2.y);

    return 0;
}