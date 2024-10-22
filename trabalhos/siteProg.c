#include <stdio.h>

int calculaPreco(int qtd,int cobra)
{
    int i, tamanho, total = 0, dinheiro;

    for(i = 0; i < qtd; i++)
    {        
        printf("insire quantos MBytes tem o download: ");
        scanf("%d", &tamanho);

        dinheiro = tamanho * cobra;
        total = total + dinheiro;

    }
    printf("o valor a ser pago total e: %d\n", total);

    return total;

}

int main()
{
    int cobra, preco, qtd, i = 0, totalpreco = 0, maiorpreco = 0;
    float media;

    printf("insira o preco que o site cobra por MByte: ");
    scanf("%d", &cobra);
    
    printf("insira a quantidade de downloads: ");
    scanf("%d", &qtd);

    while(qtd != 0)
    {
        
        preco = calculaPreco(qtd, cobra);

        if(preco > maiorpreco)
        {
            maiorpreco = preco;
        }

        i++;

        totalpreco = preco + totalpreco;

        printf("insira a quantidade de downloads: ");
        scanf("%d", &qtd);

    }

    media = totalpreco / i;

    printf("a media total de preco todos os usuarios e:  R$ %f\n ", media);
    printf("o maior preco pago foi de: R$ %d", maiorpreco);

    return 0;

}