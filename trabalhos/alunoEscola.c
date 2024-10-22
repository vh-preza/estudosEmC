#include <stdio.h>

/* calcula a media dos trabalhos, da prova e total*/
float calculaMediaT(float tb1, float tb2)
{
    float mediaTrabalho;

    mediaTrabalho = (tb1 + tb2) / 2;

    return mediaTrabalho;

}

float calculaMedia(float n1, float n2)
{
    float mediaProva;

    mediaProva = (n1 + n2) / 2;

    return mediaProva;
}

float calculaMediaTotal(float mediaTrabalho,float mediaProva)
{
    float mediaTotal;

    mediaTotal = (mediaProva+ mediaTotal) / 2;

    return mediaTotal;

}

int main()
{
    int mat;
    float n1, n2, tb1, tb2;

    printf("insire matricula do aluno: ");
    scanf("%d", &mat);
    printf("insire as notas da prova 1 e 2: ");
    scanf("%f%f", &n1, &n2);
    printf("insire as notas dos trabalhos 1 e 2: ");
    scanf("%f%f", &tb1, &tb2);
    printf("a matricula do aluno e: %d\n", mat);
    printf("as media da prova e do trabalho sao: %f e %f\n", calculaMedia(n1, n2), calculaMediaT(tb1, tb2));
    printf("e a media total e: %f\n", calculaMediaTotal(calculaMedia(n1, n2), calculaMediaT(tb1, tb2)));

    return 00000;


}