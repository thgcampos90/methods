#include <stdio.h>

double fX(double x) {
    return x*x*x - x - 2;
}

double bissecao(double a, double b, double iter) {
    double x, fa, fb, fc;
    fa = fX(a);
    fb = fX(b);

    if (fa * fb < 0) {
        while (iter > 0) {
            //printf("%lf% lf\n", a, b);
            x = (b + a) * 0.5;
            printf("%lf\n", x);
            fc = fX(x);

            if (fc * fa > 0)
                a = x;
            else
                b = x;
        iter--;
        }
    }

    else
        printf("Entre com valores [a,b] tal que fX(a) * fX(b) seja negativo");
}

int main(void) {
    bissecao(1.00,2.00,15);
}
