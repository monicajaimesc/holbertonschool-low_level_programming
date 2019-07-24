#ifndef DEF_H
#define DEF_H
#include <stddef.h>
#endif /* DEF_H */


#ifndef FUNPOINT_H
#define FUNPOINT_H


void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);


#endif /* FUNPOINT_H */

