#include <stdio.h>

void exibeValorDoAno(int anoPorMes[6][12], float a[])
{
    float valorTotal = 0;
     
    for(int i=0; i<6; i++)
    {
        for(int j=0; i<12; i++)
        {
            valorTotal=anoPorMes[i][j] * a[i];
        }
        printf("as vendas do ano de %d sao iguais a: %f", i+2010, valorTotal);
    }
}