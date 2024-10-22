#include <stdio.h>
    /*ver se matricula e valida ou invalida*/
int validez(int aasnn)
{
    if(10101<=aasnn<=22290)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int aasnn;
    printf("insira a matricula: ");
    scanf("%d", &aasnn);

    if(validez(aasnn)==1)
    {
        printf("sua matricula e valida");
    }
    else
    {
        printf("sua matricula e invalida");
    }

    return 0;
}