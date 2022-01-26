#include <stdio.h>

float calculoDeMassa (float ValorA, float ValorB) {
    const float GrmMol1 = 321.43;
    const float GrmMol2 = 150.72;
    
    printf("\n 1,2 : 1,0 \t: = %f", (1,2 * GrmMol1 + 1 * GrmMol2));
    printf("\n 1,4 : 1,0 \t: = %f", (1,4 * GrmMol1 + 1 * GrmMol2));
    printf("\n 1,0 : 1,6 \t: = %f", (1 * GrmMol1 + 1,6 * GrmMol2));
    
    return (ValorA * GrmMol2) + (ValorB * GrmMol1);
}

int main() {
    float A = 0, B = 0, resultado = 0;
    
    printf("\n Digite as massas dos elementos A e B: ");
    scanf("%f %f", &A, &B);
    
    resultado = calculoDeMassa (A, B);
    
    printf("\n Resultado: %f", resultado);
    
    return 0;
}
