#include <stdio.h>

int main ()
{
    int lista[10][10]; // Se declara la matriz con un tamaño máximo de 10x10
    int i, j;
    int renglon, columna;

    // Pedimos las dimensiones al usuario
    printf("\nDa el número de renglones y columnas separados con coma (ej. 3,2): ");
    printf("\nNota: El valor no debe ser mayor a 10: ");
    scanf("%d,%d", &renglon, &columna);

    // Validación de rango para evitar desbordamiento de memoria
    if(((renglon >= 1) && (renglon <= 10)) && ((columna >= 1) && (columna <= 10)))
    {
        // Primer bloque de ciclos: Para capturar los datos
        for (i = 0; i <= renglon - 1; i++)
        {
            for(j = 0; j <= columna - 1; j++)
            {
                printf("Número para el elemento [%d][%d]: ", i, j);
                scanf("%d", &lista[i][j]);
            }
        }

        printf("\nLos valores guardados son: \n");

        // Segundo bloque de ciclos: Para imprimir la matriz resultante
        for (i = 0; i <= renglon - 1; i++)
        {
            for(j = 0; j <= columna - 1; j++)
            {
                printf("%d ", lista[i][j]);
            }
            printf("\n");
        }
    }
    else 
    {
        printf("Error: Los valores dados no son válidos (deben estar entre 1 y 10).");
    }

    printf("\n");
    return 0;
}
