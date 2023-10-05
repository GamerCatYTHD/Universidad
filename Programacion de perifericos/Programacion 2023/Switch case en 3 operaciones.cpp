#include <stdio.h>

int main(){
	
	int op,t,res;
	
	printf("Ingresa el numero deseado para realizar las operaciones: ");
	scanf("%d", &t);
	
	printf(" Ingresa 1 si quieres dividir entre 5\n Ingresa 2 para multiplicarlo por si mismo\n Ingresa 3 o 4 para multiplicarlo por 6 y dividirlo entre 2: ");
	scanf("%d", &op);
	
	switch(op){
		case 1: res=t*5;
			break;
		
		case 2:{
			res=t*t;
			break;
		}
		case 3:
		case 4:{
			res=6*t/2;
			break;
		}
	}
	
	printf("El valor es %d y el numero original es %d ",res,t);
}