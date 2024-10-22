#include <stdio.h>
    /*calcula o troco quando necessario em uma lanchonete*/
int pagamentoDinheiro(int despesa)
{
    int valorPago, troco;

    printf("insira o valor q o cliente pagou: ");
    scanf("%d", &valorPago);

    troco = valorPago - despesa;

    if (troco == 0)
    {
        printf("nao ha troco\n");    
    }
    else
    {
        printf("o torco e: %d\n", troco);
    }

    return 0;
}

int main()
{
    int despesa, fp;

    printf("insira o valor da despesa: ");
    scanf("%d", &despesa);
    printf("insira a forma de pagamento: ");
    scanf("%d", &fp);

    if(fp==1)
    {
        pagamentoDinheiro(despesa);
    }
    else
    {
         printf("nao ha troco\n");
    }

    return 0;
}