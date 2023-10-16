#include<stdio.h>

int main() {
    float precio;
    
    printf("Ingresa el precio. \nSi este es menor a 1500 tendra un impuesto del 11 porciento: ");
    
    scanf("%f", &precio);
    
    if(precio < 1500) {
        precio = precio + 0.11 * precio;
    }
    
    printf("%.2f\n", precio);
    
    return 0;
}
