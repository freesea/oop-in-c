/* Listing 3 Examples of using the Shape class in C (file main.c) */
#ifdef shape
#include "shape.h" /* Shape class interface */
#endif

#include "rect.h"
#include <stdio.h> /* for printf() */

int main()
{
    Rectangle r1,r2;/* 多个实例 */

    /* 实例化 */
    Rectangle_ctor(&r1, 0, 2, 10, 15);
    Rectangle_ctor(&r2, -1, 3, 5, 8);

    printf("Rect r1(x=%d,y=%d,width=%d,height=%d)\n",
            r1.super.x, r1.super.y, r1.wihth, r1.height);
    printf("Rect r2(x=%d,y=%d,width=%d,height=%d)\n",
            r2.super.x, r2.super.y, r2.width, r2.height);

    /* 从超类中重用继承的函数 */
    Shape_moveBy(&r1.super, -2, 3);
    Shape_moveBy((Shape *)r2, -2, 3);

    printf("Rect r1(x=%d,y=%d,width=%d,height=%d)\n",
        r1.super.x, r1.super.y, r1.width, r1.height);
    printf("Rect r2(x=%d,y=%d,width=%d,height=%d)\n",
        r2.super.x, r2.super.y, r2.width, r2.height);
    
#ifdef shape
    Shape s1,s2; /*multiple instances of Shape*/

    Shape_ctor(&s1, 0, 1);
    Shape_ctor(&s2, -1, 2);

    printf("Shape s1(x=%d,y=%d)\n", s1.x, s1.y);
    printf("Shape s2(x=%d,y=%d)\n", s2.x, s2.y);

    Shape_moveBy(&s1, 2, -4);
    Shape_moveBy(&s2, 1, -2);

    printf("Shape s1(x=%d,y=%d)\n", s1.x, s1.y);
    printf("Shape s2(x=%d,y=%d)\n", s2.x, s2.y);
#endif
    return 0;
}