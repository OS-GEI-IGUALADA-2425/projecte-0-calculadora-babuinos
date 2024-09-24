#include <stdio.h>
#include <math.h>
#include "calc.h"

double multiplicacio (double a, double b){
    return a*b;
}
double potencia(double a, double b){
    double sol = a;
    for(int i = 1; i < b ;i++){
        sol = sol*a;
    }
    return sol;
}
double suma(int a, int b) {
    return a + b;
}
double divisio(double a, double b){
    return a / b ;
}
