#include <stdio.h>
#define ABSOLUTE(num) (num)*(-1)

int main() {
	
	int a[] = {-1, 3-4, 7, -8-3};
	int i,numassoluto;
	
	for(i=0;i<sizeof(a)/sizeof(int);i++) {
		numassoluto = a[i] < 0 ? ABSOLUTE(a[i]) : a[i];
		printf("Numero assoluto: %d\n",numassoluto);
	}
	return 0;
}
