#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void odernaArray(int a[], int qt)
{
    int  aux, im;

    for(int i=qt; i>1 ; i--)
    {
        im = indiceMaiorElemento(a, i);
   
        aux = a[im];
        a[im] = a[i-1];
        a[i-1] = aux;
    }

}


int indiceMaiorElemento(int a[], int qt)
{
    int imaior = 0;

    for(int i=1; i<qt; i++){
    
    if(a[i] > a[imaior] )
    {
        imaior = i;
    }
    
    }
    
    return imaior;
}



void aleatorios(int a[], int qt)
{
    for(int i=0; i<qt; i++)
    {
        a[i] = rand() % 100;
    }
}



void impreArray(int a[], int qt)
{
    int i;

    for(i=0; i<qt;i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");
}



int main()
{

int a[100];
char l[10];

srand(time(NULL));

aleatorios(a, 100);
odernaArray(a, 100);
impreArray(a, 100);

printf("ok?\n");
scanf("%s", l);

return 0;

}

