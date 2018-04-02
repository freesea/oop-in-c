/* Listing 2 Definition of the Shape class in C (file shape.c) */

#include "shape.h"/* Shape class interface */

/* constructor implementation */
void Shape_ctor(Shape * const me,int16_t x,int16_t y)
{
	me->x=x;
	me->y=y;
}
/* move-by operation implementation */
void Shape_moveBy(Shape * const me,int16_t dx,int16_t dy)
{
	me->+=dx;
	me->+=dy;
}