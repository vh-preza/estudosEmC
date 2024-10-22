#include <stdio.h>


//ver maior salario de cada departamento da empresa e a quantidade de funcionarios com ele//


void umDepartamento(int qtd,float *pmaiorS,int *pqtdmaior)
{
    int matricula;
    float salario, a[50], maiorsalario;

    for(int i=0; i<qtd; i++)
    {
        printf("insira a matricula do funcionario: ");
        scanf("%d", &matricula);
        printf("insira o salario do funcionario %d: ", i+1);
        scanf("%f", &a[i]);

        if(a[i]>maiorsalario)
        {
            maiorsalario = a[i];
        }
    }

     *pmaiorS = maiorsalario;

    for(int j=0; j<qtd; j++)
    {
        if(a[j] == maiorsalario)
        {
            ++*pqtdmaior;
        }
    }
}

int main()
{
    int codigo, qtd, qtdmaior = 0;
    int * pqtdmaior = &qtdmaior;
    float maiorS = 0;  
    float * pmaiorS = &maiorS; 


    printf("insira o codigo do departamento: ");
    scanf("%d", &codigo);
    
    while(codigo != 0)
    {
    printf("insira a quantidade de funcionarios: ");
    scanf("%d", &qtd);

    umDepartamento(qtd, pmaiorS, pqtdmaior);

    printf("o maior salario é: %0.1f\n", maiorS);
    printf("a quantidade de funcionarios com o maior salario é: %d\n", qtdmaior);
    
    maiorS = 0;
    qtdmaior = 0;
    printf("insira o codigo do departamento: ");   
    scanf("%d", &codigo);
    }

    return 0;
}
