//Declaration of the Shape “class” in C 
#ifndef SHAPE_H
#define SHAPE_H

/* Shape's attributes... */
typedef struct{
	int16_t x;/* x-coordinate of Shape's position */
	int16_t y;
}Shape;

/* Shape's operations (Shape's interface)... */
void Shape_ctor(Shape * const me,int16_t x,int16_t y);
void Shape_moveBy(Shape * const me,int16_t dx,int16_t dy);

#endif /* SHAPE_H */