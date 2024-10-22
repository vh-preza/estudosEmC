#include <stdio.h>

int main()
{
    int i = 0, n = 0;
    float nota, somaNotas = 0, media = 0;
    char mf;

    printf("insira o valor da primeira nota: ");
    scanf("%f", &nota);

    while(nota != -1)
    {
        somaNotas += nota;
        n += 1;
        
        printf("insira a proxima nota: ");
        scanf("%f", &nota);

    }

    media = somaNotas / n ;

    if(media<3)
    {
        mf = 'R';
    }

    if(media>3 && media<7)
    {
        mf = 'P';
    }

    if(media>7)
    {
        mf = 'A';
    }

    printf("%c", mf);

    return 0;
}