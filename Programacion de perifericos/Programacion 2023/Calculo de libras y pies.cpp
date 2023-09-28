#include <stdio.h>

float pie=0.09290, libra=0.45559,valor,opcion;
// pie a metros, libra a kg
int main(void)
{

printf("Introduce 1 si quieres convertir metros a pies \nIntroduce 2 si quieres convertir Kg a libras\n");
scanf("%f",&opcion);

if (opcion==1){
	printf("Ingresa el la cantidad de metros a convertir: ");
	scanf("%f", &valor);
	valor*=pie;
} else if(opcion==2){
	printf("Ingresa el la cantidad de pies a convertir: ");
	scanf("%f", &valor);
	valor*=libra;
} else{
	printf("Reinicia el programa y escoje una opcion valida");
}


printf("El valor de tu convercion es: %f",valor);

}