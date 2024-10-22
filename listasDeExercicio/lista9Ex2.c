#include <stdio.h>

int funcao(int qtd[4][31],float precos[4][31])
{
    float valorTotal;

    for(int i=0; i<4; i++)
    {
        valorTotal=0;

        for(int j=0; i<31; i++)
        {
            valorTotal= precos[i][j] + valorTotal;

            printf("o valorTotal do dia %d do combustivel 1 e %f", j+1, precos[0][j]);
            printf("o valorTotal do dia %d do combustivel 2 e %f", j+1, precos[1][j]);
            printf("o valorTotal do dia %d do combustivel 3 e %f", j+1, precos[2][j]);
            printf("o valorTotal do dia %d do combustivel 4 e %f", j+1, precos[3][j]);
        }
        printf("o valor total vendido no mês de agosto do combustivel %d e: %f ", i, valorTotal);
    }
}