#include <stdio.h>

    /* calcular oq ser pago ao abastecer o carro*/
    
float calculaValor(float valorLitro, float quantidadeDeLitro)
    {
    
    float valorTotal;

    valorTotal = valorLitro * quantidadeDeLitro;

    return valorTotal;
    }

int main(void)
    {
        float valorLitro, quantidadeDeLitro, valorASerPago;


        printf("Insira o valor do litro e a quantidade de litro: ");
        scanf("%f%f", &valorLitro, &quantidadeDeLitro);

        valorASerPago = calculaValor(valorLitro, quantidadeDeLitro);

        printf("o valor a ser pago e 0%0.2f reais\n", valorASerPago);

        return 0;

    }
