// Student Number : 211804106
#include <stdio.h>
#include <math.h>

int main() {
	double x = 0.2106; 
	int b = 6; 
	int max_k = 40 + b;
	double sum = 0;
	double us = 2;
	double true_value = 1 / pow(1-x,us);
	double error;

	
	printf("Series Expansion results of 1/(1-x)^2 for x =%lf\n", x);
	
	printf("\nTrue value: %lf\n", true_value);
	

	for (int k = 2; k < 48; k += 2) {
		double term = k * pow(x, k - 1);
		sum += term;
		error = fabs(true_value - sum);

		printf("k: %d\tResult: %.10lf\tError: %.10lf \n", k, term, error);
	}
	printf("\n");
	printf("Inf\tResult: %.10lf\tError: %.10lf", sum, error);

	return 0;
}