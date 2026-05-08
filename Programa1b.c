#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j;

    printf("Imprimir Matriz\n");

    i = 0; // Inicializamos el contador de renglones
    while(i < 3) 
    {
        j = 0; // Reiniciamos el contador de columnas para cada nuevo renglón
        while (j < 3)
        {
            printf("%d, ", matriz[i][j]);
            j++; // Incrementamos columna
        }
        printf("\n"); // Salto de línea al terminar el renglón
        i++; // Incrementamos renglón
    }

    return 0;
}
