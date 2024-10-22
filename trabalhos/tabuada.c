#include <stdio.h>
    /* tabuada de 1 a 10*/
void tabuada(int n)
{
    int i, resultado;
    
    for(i=1; i<=10; i++)
    {
        
        resultado = n * i;

        printf("%d x %d e igual a= %d\n", n, i, resultado);

    }

}

int main()
{
    int n;

    for(n=1; n<=10; n++)
    {
        tabuada(n);
    }

    return 0;
}
