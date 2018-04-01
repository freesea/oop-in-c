/* Listing 5 The Constructor of class Rectangle (file rect.c) */

#include "rect.h"

/* constructor implementation */
void Rectangle_ctor(Rectangle * const me, int16_t x, int16_t y, uint16_t width, uint16_t height)
{
    Shape_ctor(me->super, x, y);

    me->wihth=width;
    me->height=height;
}