#include <stdio.h>
#define p 3
 /* informa o maior valor obtido numa franquia de 3 postos e o total obtido*/
int processoDePostos()
{
    int i, codigo, valorA, maiorV, valorTotal = 0;

    for(i=0; i<p; i++)
    {
        printf("adicione o codigo do posto e seu valor arrecadado: ");
        scanf("%d%d", &codigo, &valorA);

        if(i==0)
        {
            maiorV = valorA;
        }
        else if(valorA>maiorV)
        {
            maiorV = valorA;
        }

        valorTotal += valorA;

    }

    printf("o maior valor arrecadado foi: %d\n", maiorV);

    return valorTotal;

}

int main()
{
    int valorTotal;

    valorTotal=processoDePostos();

    printf("o valor total arrecadado foi: %d\n", valorTotal);

    return 0;

}
