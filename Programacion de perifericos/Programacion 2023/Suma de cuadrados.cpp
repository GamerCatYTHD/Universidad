#include<stdio.h>

int main() {
    int numero, cuadrado, sumaCuadrados = 0;
	printf("Ingresa los numeros que gustes y estos daran su cuadrado, para sumarlos preciona 0: ");
    scanf("%d", &numero);

    while(numero != 0) {
        cuadrado = numero * numero;
        printf("%d\n", cuadrado);
        
        sumaCuadrados += cuadrado;
        printf("Ingresa el siguiente numero: ");
        scanf("%d", &numero);
    }

    printf("Suma de cuadrados: %d\n", sumaCuadrados);

    return 0;
}
