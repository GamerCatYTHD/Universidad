#include <stdio.h>
float acre=0.4047;

int main(){
	float acres, res;
	printf("Ingrese la cantidad de acres que desea convertir a hectarias: ");
	scanf("%f", &acres);
	res=acres*acre;
	printf("Los acres que ingresaste equivalen a %f de hectarias", res);
}