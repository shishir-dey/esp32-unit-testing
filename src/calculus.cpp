#include "calculus.h"

double derivative(DFuncOneToOne_t *f, double x, DerivativeMethod_t method, double h)
{
    double res;
    switch (method)
    {
    case CENTRAL:
        res = ((*f)(x + h) - (*f)(x - h)) / (2 * h);
        break;
    case FORWARD:
        res = ((*f)(x + h) - (*f)(x)) / (h);
        break;
    case BACKWARD:
        res = ((*f)(x) - (*f)(x - h)) / (h);
        break;
    default:
        res = 0;
    }
    return res;
}