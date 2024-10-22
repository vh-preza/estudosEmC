#include <stdio.h>
    /*ver a quantidade de estoque com mais de 1000 carros,usando diferentes tipos, de uma empresa*/
int automoveis(int qtd)
{
    
    int i, codigo, estoque, acimade1000=0;
    
    for(i=0; i<qtd; i++)
    {
        printf("insira o codigo do modelo e a quantidade em estoque: ");
        scanf("%d%d", &codigo, &estoque);
        if(estoque>=1000)
        {
        acimade1000 = acimade1000 + 1;
        }
    }
    return acimade1000;

}

    


int main()
{
    int qtd, numeroDeModelos;


    printf("insira a quantidade de automoveis diferente produzidos por uma empresa: ");
    scanf("%d", &qtd);

    numeroDeModelos = automoveis(qtd);

    printf("o numero de automoveis diferentes com mais de 1000 em estoque e: %d", numeroDeModelos);

    return 0;
}