#include <stdio.h>

int main(){

	int n,sum=0, num, count=0;

	printf("cuantas veces quieres contar? : ");
	scanf("%d", &count);
	
	for(n=1; n<=count ; n++){
		printf("ingresa un numero POSITIVO a sumar: ");
		scanf("%d", &num);
		if(num>=0){
			sum=sum+num;
		}
	}

printf("la suma de tus numeros es: %d", sum);
	
}
