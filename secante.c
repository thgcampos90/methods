#include <stdio.h>
#include <math.h>

double fX(double x) {
    //return x * x * x * x - x - 10;
    //return x * x - 4;
    return cos(x) + 2 * sin(x) + x * x;
}

double secante(double x0, double x1, int iter) {
    double xN= x1, xB= x0, x_old;
    double fxA, fxP; // A: anterior , P: posterior
    fxA = fX(xB);
    fxP = fX(xN);

    xN = ( (xB * fxP) - (xN * fxA) ) * 1 / ( fX(xN) - fX(xB) );
    printf("%lf\n", xN);
    xB = x1;
    iter --;

    while (iter > 0) {
        fxA = fX(xB);
        fxP = fX(xN);
        x_old = xN;
        xN = ( (xB * fxP) - (xN * fxA) ) * 1 / ( fX(xN) - fX(xB) );
        printf("%lf\n", xN);
        xB = x_old;
        iter--;
    }
}

int main(void) {
    secante(0.00,-0.10,6);
}
