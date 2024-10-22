#include <stdio.h>

/*1*/
int multiplicacao(int a[], int qt)
{
    int produto = 1;

    for(int i=0; i<qt;i++)
    {
        produto = produto * a[i];
    }

    return produto;
}

/*2*/

void funcao(int a[], int qt, int *p, int *im)
{
    for(int i = 0; i<qt; i++)
    {
        if((a[i]%2) == 0)
        {
            ++*p;
        }
        else
        
            ++*im;
        
    }

}

/*3*/

int retornaNumAcimaDaMedia(int a[],int qt,int media)
{
    int acimaDaMedia = 0;
    
    for(int i = 0; i<qt; i++)
    {
        if(a[i]>media)
        {
            acimaDaMedia++;
        }
    }

    return acimaDaMedia;
    
}

/*4*/

int funcao(int a[], int qt)
{
    int numeros = 0;
    
    for(int i=0; i<qt; i++)
    {
        printf("isira o numero %d", i+1);
        scanf("%d", a[i]);
    }

    for(int j=0; j<qt-1; j++)
    {
        if(a[j]<a[qt-1])
        {
           numeros++; 
        }
    }

    return numeros;
}

/*5*/

struct depto
{
int qtd;
float soma;
};

typedef struct depto depto;

int exibeMedias(depto a[])
{
    int media;

    for(int i = 0; i<30; i++)
    {
        media = a[i].soma/a[i].qtd;

        printf("o codigo do departamento e: %d", i+1);
        printf("a media e: %d", media);    
    }
}

/*media = a->soma/a->qtd;*/

/*6*/

int VerificarIgualdadeComElementosDaArray(float a[],float x, float qtd)
{
    for(int i= 0; i<qtd; i++)
    {
        if(a[i]== x)
        {
            return i;
        }
    }

    return -1;
}