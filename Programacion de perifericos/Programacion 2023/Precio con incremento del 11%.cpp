// 10/2/2023
#include <stdio.h>

int main(){
	// res = precio nuevo
	float precio, res;
	
	printf("Ingresa el precio del tiramitsu importado de italia: ");
	scanf("%f", &precio);
	
	if (precio<=1500){
		
		res=precio*1.11;
	}else{
		
		res=precio*1.08;
		printf("Congrats, tu producto tiene impuestos mas bajos\n");
	}
	
	printf("El total de su cuenta es: %2.2f y con taxes es %2.2f",precio, res);
}