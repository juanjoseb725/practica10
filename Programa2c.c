#include <stdio.h>

int main()
{
    int i, j, a[5][5];

    i = 0;
    do // Representa al renglón del arreglo
    {
        j = 0;
        do // Representa a la columna del arreglo
        {
            // Se asigna la suma de los índices
            a[i][j] = i + j;
            printf("\t%d, ", a[i][j]);
            j++;
        } 
        while (j < 5); // Condición para las columnas

        printf("\n");
        i++;
    } 
    while (i < 5); // Condición para los renglones

    return 0;
}
