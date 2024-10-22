#include <stdio.h>

    //teste ponteiro//
    
int leValidaTipo()
{
    int n;
    
    printf("1-fruta\n2-legume\n3-verdura\n");
    printf("insira o numero desejado: ");
    scanf("%d", &n);
    
    if(n==1)
    {
    
        return n;
    }

    else if(n==2)
    {
        return n;
    }

    else if(n==3)
    {
        return n;
    }

    else
    {
        return 0;
    }
}

void qtdProdutos(int qtdTotal, int *pqtd1,int *pqtd2,int *pqtd3)
{
    int codigo, tipo;  
    for(int i=0; i<qtdTotal; i++)
    {
        printf("escreva o codigo do produto: ");
        scanf("%d", &codigo);
        
        tipo = leValidaTipo();

        if(tipo==1)
        {
            ++*pqtd1;
        }
        else if(tipo==2)
        {
            ++*pqtd2;
        }
        else if(tipo==3)
        {
            ++*pqtd3;
        }
    }
}

int main()
{
    int qtdTotal;
    int qtd1= 0, qtd2 = 0, qtd3 = 0;
    int *pqtd1 = &qtd1;
    int *pqtd2 = &qtd2;
    int *pqtd3 = &qtd3;
    printf("escreva o numero de produtos: ");
    scanf("%d", &qtdTotal);

    qtdProdutos(qtdTotal, pqtd1, pqtd2, pqtd3);

    printf("%d de frutas\n%d de legumes\n%d de verduras", qtd1, qtd2, qtd3);

    return 0;
}


