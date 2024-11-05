#include <stdio.h>
#include <math.h>
#define AREA(r) (M_PI)*((r)*(r))
#define PERIMETRO(r) ((2) * (M_PI) * (r))
int main() {
	float raggio=2;
	printf("AREA: %.2f\n",AREA(raggio));
	printf("PERIMETRO: %.2f",PERIMETRO(raggio));
	return 0;
}
