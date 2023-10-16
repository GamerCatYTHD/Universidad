#include<stdio.h>

int main() {
    float salario, suma = 0;
    int i;

    for(i = 1; i < 16; i++) {
    	printf("Ingrese el salario %d : ", i);
        scanf("%f", &salario);
        suma += salario;
    }

    printf("La suma de los salarios son: %.2f\n", suma);

    return 0;
}
