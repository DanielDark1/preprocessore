#include <stdio.h>
#define LIRA 1936,26
#define EURTOLIRA(a) (a)*LIRA
#define LIRATOEUR(a) (a)/LIRA
int main() {
	float x = 2;
	printf("EURO : %.2f\n",x);
	x = EURTOLIRA(x);
	printf("LIRA : %.2f\n",x);
	x = LIRATOEUR(x);
	printf("EURO : %.2f",x);
	return 0;
}
