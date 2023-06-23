#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dado()
{
    return rand() % 10 + 0;
}
int main()
{
    int s, d, i, j, matriz[10][10];
    int menor_soma, menor_linha;
    int maior_coluna, maior_soma;
    int menor = 9999, maior = 0;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matriz[i][j] = dado();
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    // Soma da linha
    for (i = 0; i < 10; i++)
    {
        s = 0;
        for (j = 0; j < 10; j++)
        {
            s += matriz[i][j];
        }
        printf("Soma da linha [%d] = %d\n", i, s);
        if (s < menor)
        {
            menor = s;
            menor_linha = i;
        }
    }
    printf("\nA menor linha eh [%d] = %d\n\n", menor_linha, menor);
    // soma da coluna
    for (j = 0; j < 10; j++)
    {
        d = 0;
        for (i = 0; i < 10; i++)
        {
            d += matriz[i][j];
        }
        printf("Soma da coluna [%d]= %d\n", j, d);
        if (d > maior)
        {
            maior = d;
            maior_coluna = j;
        }
    }
    printf("\nA maior coluna eh:[%d] = %d\n", maior_coluna, maior);
    return 0;
}
