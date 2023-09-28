#include <stdio.h>
// actividad hecha el 9/28/2023 
float pi=3.14159265358979323846;

int main(){
	float res,rad, alt;;
	
	printf("Introduce el radio y la altura pls: ");
	scanf("%f %f", &rad, &alt);
	res= 2*pi*rad*alt;
	printf("El area de tu cilindro es: %f", res);
}