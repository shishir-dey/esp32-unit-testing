#include "settings.h"

#if !configUNIT_TESTING_MODE
#include <Arduino.h>
#include "calculus.h"
#include "misc.h"

void setup()
{
    Serial.begin(115200);
    printf("d/dx of my_sine() at %f is %f\n", 1.00, derivative(my_sine, 1.00, CENTRAL, 0.01));
    printf("d/dx of my_sine() at %f is %f\n", 2.00, derivative(my_sine, 2.00, CENTRAL, 0.01));
    printf("d/dx of my_sine() at %f is %f\n", 3.00, derivative(my_sine, 3.00, CENTRAL, 0.01));
    printf("d/dx of my_sine() at %f is %f\n", 4.00, derivative(my_sine, 4.00, CENTRAL, 0.01));
    printf("d/dx of my_sine() at %f is %f\n", 5.00, derivative(my_sine, 5.00, CENTRAL, 0.01));
    printf("d/dx of my_sine() at %f is %f\n", 6.00, derivative(my_sine, 6.00, CENTRAL, 0.01));
    printf("d/dx of my_sine() at %f is %f\n", 7.00, derivative(my_sine, 7.00, CENTRAL, 0.01));
    printf("d/dx of my_sine() at %f is %f\n", 8.00, derivative(my_sine, 8.00, CENTRAL, 0.01));
    printf("d/dx of my_sine() at %f is %f\n", 9.00, derivative(my_sine, 9.00, CENTRAL, 0.01));
    printf("d/dx of my_sine() at %f is %f\n", 10.00, derivative(my_sine, 10.00, CENTRAL, 0.01));
}

void loop()
{
}

#endif