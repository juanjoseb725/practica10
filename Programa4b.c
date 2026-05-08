#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, cont = 0, *ap;

    // Asignamos la dirección del primer elemento de la matriz al apuntador
    ap = *matriz; 

    printf("Imprimir Matriz (While + Apuntadores)\n");

    i = 0;
    while (i < 9)
    {
        // Control visual: cada 3 elementos saltamos de línea
        if (cont == 3) 
        {
            printf("\n");
            cont = 0; 
        }

        // Acceso directo a memoria usando aritmética de apuntadores
        printf("%d\t", *(ap + i));
        
        cont++;
        i++;
    }

    printf("\n");
    return 0;
}
