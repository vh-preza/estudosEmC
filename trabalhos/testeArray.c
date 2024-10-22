#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int maiorArray(int num[], int qtd)
{
    int imaiorNum = 0;

    for(int i=1; i<qtd; i++)
    {
        if(num[i]> num[imaiorNum])
        {
            imaiorNum = i;
        }
    }

    return imaiorNum;
}

void ordenaArray(int num[], int qtd)
{
    int aux, im;

    for(int i =qtd; i>1; i--)
    {
        im = maiorArray( num, i);
        aux= num[im];
        num[im] = num[i-1];
        num[i-1] = aux;
    }
}

void aleatorio(int num[], int qtd)
{
    for(int i= 0; i<qtd; i++)
    {
        num[i] = rand()%1000;
    }
}

void imprimeArray(int num[], int qtd)
{
    for(int i=0; i<qtd; i++)
    {
        printf("%d, ", num[i]);
    }

    printf("\n");
}

int main()
{
    int num[1000];
    char a[8];
    char b[7];
    srand(time(NULL));

    printf("insira seu nome: ");
    scanf("%s", a);
    printf("insira seu nome 2: ");
    scanf("%s", b);
    printf("%s %s, belo nome\n", a, b);

    aleatorio(num, 1000);
    ordenaArray(num, 1000);
    imprimeArray(num, 1000);



    return 0;
}

