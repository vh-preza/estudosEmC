#include <stdio.h>
 
 /* calcular o salario bruto a partir do desconto do imposto de renda*/

float calculaSalarioLiquido(float salarioBruto){

    float aliquota, parcelaADeduzir, imposto;

    if(salarioBruto<=1903.98)
    {
        aliquota=0;
        parcelaADeduzir=0;
    }
    else
    {
        if(1903.99<=salarioBruto<=2826.65){
            aliquota= 0.075;
            parcelaADeduzir= 142.80;
        }
        else
        {
        if(2826.66<=salarioBruto<=3751.05)
        {
            aliquota= 0.15;
            parcelaADeduzir = 354.80;
        }
            else
            {
            if(3751.06<=salarioBruto<=4664.68)
            {
            aliquota= 0.225;
            parcelaADeduzir = 636.13;
            }
                else
                {
                if(4664.68<salarioBruto)
                {
                aliquota= 0.275;
                parcelaADeduzir = 869.36;
                }
                }
            }
        }
    }
    
    return salarioBruto - (salarioBruto * aliquota - parcelaADeduzir);
}

int main(void){

    float sb, sl;

    printf("insira salario bruto: ");
    scanf("%f", &sb);

    sl=calculaSalarioLiquido(sb);
    printf("seu salario apos o imposto de renda: %0.2f", sl);
    return 0;
}
