#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille;
    int pairOuPas;

    printf("Entrez la taille desiree : ");
    scanf("%d", &taille);

    int x = 0;
    for(x = 0; x < taille; x++)
    {
        printf("\n");
        int y = 0;
        for(y = 0; y < taille; y++)
        {
            if(x == y || y == taille - x -1)
            {
                printf("X");
            }
            else
            {
                printf(".");
            }
        }
    }

    return 0;
}


