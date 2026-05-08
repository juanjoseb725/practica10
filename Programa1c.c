#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j;

    printf("Imprimir Matriz\n");

    i = 0;
    do // Representa al renglón del arreglo
    {
        j = 0;
        do // Representa a la columna del arreglo
        {
            printf("%d, ", matriz[i][j]);
            j++;
        } 
        while (j < 3); // Condición de las columnas

        printf("\n");
        i++;
    } 
    while (i < 3); // Condición de los renglones

    return 0;
}
