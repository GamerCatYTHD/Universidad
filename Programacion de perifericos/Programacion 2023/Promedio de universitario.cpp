#include<stdio.h>

int main() {
    float promedio;
    
    printf("Ingresa el promedio del alumno en una escala de 1 a 10: ");
    scanf("%f", &promedio);
    
    if(promedio >= 6) {
    	
        printf("aprobado\n");
        
    } else {
    	
        printf("reprobado\n");
        
    }
    
    return 0;
}
