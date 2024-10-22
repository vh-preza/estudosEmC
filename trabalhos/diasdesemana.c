#include <stdio.h>
#define semana 7
    /*transformar os dias em semanas mais dias*/
    
int calculaDiasDeSobra(int numeroDeDias)
{
    int diasDeSobra;
    
    diasDeSobra = numeroDeDias % semana;

    return diasDeSobra;
}

int calculaSemanas(int numeroDeDias)
{
    int numeroDeSemanas, diasDeSobra;

    numeroDeSemanas = numeroDeDias / semana;

    return numeroDeSemanas;
    
}

int main(void)
{
    int numeroDeDias, numeroDeSemanas, diasDeSobra;

    printf("insira o numero de dias do evento: ");
    scanf("%d", &numeroDeDias);

    numeroDeSemanas = calculaSemanas(numeroDeDias);

    diasDeSobra = calculaDiasDeSobra(numeroDeDias);

    printf("%d semanas e %d dias\n", numeroDeSemanas,  diasDeSobra);

    return 0;
       
}