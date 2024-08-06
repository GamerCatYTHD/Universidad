#include<stdio.h>

int main() {
    float salario, suma = 0, promedio;
    int contador = 0;
	
	printf("Ingrese la cantidad de salarios deseados, cuando termine ingrese 0 para obtener el promedio\n");
	
    do {
    	printf("Ingrese el salario numero %d: ", contador);
        scanf("%f", &salario);
        
        if (salario != 0) {
            suma += salario;
            contador++;
        }
    } while(salario != 0);

    if(contador != 0) {
        promedio = suma / contador;
        printf("Nomina: %.2f\nPromedio: %.2f\n", suma, promedio);
    }

    return 0;
}
