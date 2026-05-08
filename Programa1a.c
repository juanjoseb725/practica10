#include <stdio.h>

int main()
{
    // Declaración e inicialización de la matriz de 3x3
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j;

    printf("Imprimir Matriz\n");

    // El primer ciclo for recorre los renglones (i)
    for (i=0 ; i<3 ; i++) 
    {
        // El segundo ciclo (anidado) recorre las columnas (j)
        for (j=0 ; j<3 ; j++)
        {
            printf("%d, ", matriz[i][j]);
        }
        // Salto de línea al terminar cada renglón
        printf("\n");
    }

    return 0;
}
