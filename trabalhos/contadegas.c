#include <stdio.h>

/* calcular conta de gás com base no metro cubico*/

int calculaContaGas(int consumoDeGas){
    
   int tarifa;

    if(consumoDeGas<=7)
    {

    tarifa = 1 * consumoDeGas;
   }
    else
    {
        if(consumoDeGas<=23)
        {
    
        tarifa = (2 * (consumoDeGas-7))+ 7;
        }
            else
            {
                if(consumoDeGas<=83)
                {

                tarifa = (3 * (consumoDeGas-23))+39;
                }
                    else
                    {
                        if(consumoDeGas>=84)
                        {

                        tarifa = (4 * (consumoDeGas-83))+219;
                        }
                    }
            }
    }
    return tarifa;
}


int main(void){
    
    int comDgas, pagamento;
    
    printf("Entre com o consumo de gas: ");
    scanf("%d", &comDgas);

    pagamento= calculaContaGas(comDgas);

    printf("A conta de gas sera: %d", pagamento);

    return 0;

}