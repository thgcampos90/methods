#include <stdio.h>

double interLagrange(double *X, double *Y, int G, double x) {
	int k;
	double L, div, resultado;
	for (int i=0; i < G; i++) {
    	L = 1.00, div = 1.00;
		k = i;
		for (int j= 0; j < G -1; j++) {
			k += 1;
			L *= (x - X[(k) % G]);
                	div *= (X[i] - X[(k) % G]);
        	}	
		resultado += (Y[i] * L) * 1/div;
	}
	//printf ("%lf\n", resultado);
	return resultado;
}


int main(void) {
	int    G       = 3; //4;
	double x       = 4.00; //3.00;
	double X[]     = {-2.00,0.00,4.00}; //{1.00,2.00,4.00,7.00}; // fX
	double Y[]     = {2.00,-2.00,1.00}; //{3.00,6.00,8.00,12.00}; //x
	double result  = interLagrange(X, Y, G, x);
	printf ("%lf\n", result);
}

