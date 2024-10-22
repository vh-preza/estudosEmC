#include <stdio.h>
    /*calcula a quantidade de celulas ao retirar dinheiro no banco*/
int cedulasNecessarias(int qtdDinheiro)
{
    int numeroDeCedulas;

    numeroDeCedulas= 0;

    while(qtdDinheiro>0)
    {
        if (qtdDinheiro>=100)
        {
            qtdDinheiro = qtdDinheiro - 100;
        }
            else
            {
                if(qtdDinheiro>=50)
                {
                qtdDinheiro = qtdDinheiro - 50;
                }
                    else
                    {
                        if(qtdDinheiro>=20)
                        {
                           qtdDinheiro =  qtdDinheiro-20;
                        }
                            else
                            {
                                if(qtdDinheiro>=10)
                                {
                                   qtdDinheiro =  qtdDinheiro - 10;
                                }
                                    else
                                    {
                                        if(qtdDinheiro>=5)
                                        {
                                         qtdDinheiro =  qtdDinheiro - 5;
                                        }
                                            else
                                            {
                                                if(qtdDinheiro>=2)
                                                {
                                                   qtdDinheiro =  qtdDinheiro - 2;
                                                }  
                                                    else
                                                    {
                                                        if(qtdDinheiro==1)
                                                        {
                                                         qtdDinheiro =   qtdDinheiro - 1;
                                                        }
                                                    }
                                            }
                                    }
                            }
                    }
            }
    numeroDeCedulas = numeroDeCedulas + 1;
 }
    return numeroDeCedulas;
}

int main(void)
{
    int valorASerRetirado, numeroDeCedulas;

    printf("insira o valor a retirar: ");
    scanf("%d", &valorASerRetirado);

    numeroDeCedulas = cedulasNecessarias(valorASerRetirado);

    printf("o numero de cedulas e: %d\n", numeroDeCedulas);

    return 0;
}