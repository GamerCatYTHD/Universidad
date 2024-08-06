#include<stdio.h>

int main() {
    float pago,contador=1, suma = 0;

	printf("Ingresa los pagos, cuando desees terminar ingresa 0: ");
    scanf("%f", &pago);

    while(pago != 0) {
    	contador++;
    	printf("Ingresa el pago numero %2.0f: ", contador );
        suma += pago;
        scanf("%f", &pago);
    }

    printf("La suma de los pagos efectuados es: %.2f\n", suma);

    return 0;
}
