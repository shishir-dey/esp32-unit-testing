#ifndef CALCULUS_H
#define CALCULUS_H

#include "custom_types.h"

typedef enum
{
    CENTRAL,
    FORWARD,
    BACKWARD,
} DerivativeMethod_t;

double derivative(DFuncOneToOne_t *f, double x, DerivativeMethod_t method, double h);

#endif