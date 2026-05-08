#include <stdio.h>

int main()
{
    int i, j, a[5][5];

    i = 0; // Inicializamos el índice de los renglones
    while (i < 5) 
    {
        j = 0; // Importante: Reiniciar el índice de las columnas en cada renglón
        while (j < 5) 
        {
            // Asignamos la suma de los índices a la posición actual
            a[i][j] = i + j;
            printf("\t%d, ", a[i][j]);
            j++; // Siguiente columna
        }
        printf("\n"); // Salto de línea al terminar la fila
        i++; // Siguiente renglón
    }

    return 0;
}
