#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, cont = 0, *ap;

    // 'ap' apunta al inicio del bloque de memoria de la matriz
    // Es lo mismo que decir ap = &matriz[0][0];
    ap = *matriz; 

    printf("Imprimir Matriz usando Apuntadores\n");

    // Como es una matriz de 3x3, recorremos 9 posiciones en total
    for (i = 0; i < 9; i++)
    {
        // Usamos 'cont' para saber cuándo saltar de línea (cada 3 elementos)
        if (cont == 3) 
        {
            printf("\n");
            cont = 0; // Reiniciamos el contador para el siguiente renglón
        }

        // Accedemos al contenido usando aritmética de apuntadores: *(ap + i)
        printf("%d\t", *(ap + i));
        cont++;
    }

    printf("\n");
    return 0;
}
