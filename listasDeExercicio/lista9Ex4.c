#include <stdio.h>
#include <string.h>

struct _produto
{
    char nome[30];
    float preco;
    int qtd;

};

typedef struct _produto produto;


int leitura(char*fim,produto produtos[])
   
{
    int contador = 0;
    int ret;


    printf("insira o nome do produto:\n");
    scanf("%s", produtos[0].nome);

    ret = strcmp(fim, produtos[0].nome);

    while(ret!= 0)
    {
        for(int i=0; i<50; i++){

            printf("insira o preco do produto:\n");
            scanf("%f", &produtos[i].preco);
            printf("insira a quantidade deste produto disponivel no estoque:\n");
            scanf("%d", &produtos[i].qtd);

            contador++;

            printf("insira o nome do produto:\n");
            scanf("%s", produtos[i+1].nome);

            ret = strcmp(fim, produtos[i+1].nome);
    }
    
    return contador;
}
}



int main()
{
    char*fim= "fim";
    produto produtos[50];
    char desejo[10];
    int limite;
    int contador = 0;
    int ret;

    limite = leitura(fim, produtos);

    printf("insira o nome do produto que deseja procurar: ");
    scanf("%s", desejo);

    ret = strcmp(fim, desejo);

    while (ret!= 0)
    {
        for(int i= 0; i<limite; i++)
        {
            ret = strcmp(produtos[i].nome, desejo);
            if(ret == 0)
            {
                printf("quantidade em estoque: %d\n", produtos[i].qtd);
                printf("preço unitario e: %f\n", produtos[i].preco);
                contador++;            
            }
                else if(i==limite-1)
                {
                    if(contador==0)
                    {
                        ("produto inexistente...\n");
                    }
                }
        }

        printf("insira o nome do produto que deseja procurar: ");
        scanf("%s", desejo);

        ret = strcmp(fim, desejo);

    }

    return 0;
}