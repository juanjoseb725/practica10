#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, cont = 0, *ap;

    // Apuntamos al inicio de la matriz (primer elemento)
    ap = *matriz; 

    printf("Imprimir Matriz (Do-While + Apuntadores)\n");

    i = 0;
    do
    {
        // Si ya imprimimos 3 elementos, saltamos de renglón
        if (cont == 3) 
        {
            printf("\n");
            cont = 0; 
        }

        // Accedemos al valor en la dirección (ap + i)
        printf("%d\t", *(ap + i));

        cont++;
        i++;
    } 
    while (i < 9); // Se repite hasta haber recorrido los 9 espacios

    printf("\n");
    return 0;
}
