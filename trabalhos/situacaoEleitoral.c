#include <stdio.h>
 /* ver se é necessario votar*/
int casteloDoRatimbum(int idade)
{
    if(idade<16)
    {
        printf("nao poderas votar!");
    }
    else if(16<=idade<18, idade>70)
    {
        printf("seu voto e facultativo");
    }
    else if (18<=idade<=70)
    {
        printf("vote imediatamente!");
    }
    return 0;

}



int main()
{
   
   int idade;
   printf("insira sua idade: ");
   scanf("%d", &idade);

   casteloDoRatimbum(idade);

   return 0; 
}