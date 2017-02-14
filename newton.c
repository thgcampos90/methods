#include <stdio.h>

double fX(double x) {
    return x * x - 612;
}

double dfX(double x) {
    return 2 * x;
}

double newton(double x, int iter) {
    while (iter > 0) {
        x = x - fX(x) * 1/dfX(x);
        printf ("%lf\n", x);
        iter--;
    }
}

int main(void) {
    newton(10, 3);
}