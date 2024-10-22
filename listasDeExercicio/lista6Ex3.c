#include <stdio.h>

int leValidaClassificacao()
{
    int n;

    printf("inserir verificaçao: ");
    scanf("%d", &n);

    if(n>=1 && n<=4)
    {
        return n;
    }
    else
    
    return 0;

}

void classe(int n, int *pmin,int *pmax)
{   
    if(n == 1)
    {
        *pmin = 100;
        *pmax = 120;
    }

    else if(n == 2)
    {
        *pmin = 150;
        *pmax = 180;
    }

    else if(n == 3)
    {
        *pmin = 200;
        *pmax = 250;
    }

    else if(n == 4)
    {
        *pmin = 250;
        *pmax = 300;
    }
}

int main()
{
    int a[100], classificacao;
    int max = 0, min = 0;
    int *pmax = &max, *pmin = &min;

    for(int i=0; i<100; i++)
    {
        printf("inserir codigo da peca: ");
        scanf("%d", &a[i]);

        classificacao = leValidaClassificacao();

        classe(classificacao, pmin, pmax);
        printf("a peca de codigo %d tem:\n quantidade mininima: %d\n quantidade maxima: %d\n", a[i], min, max);
        
    }

    return 0;
}