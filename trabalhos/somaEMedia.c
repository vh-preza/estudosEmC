#include <stdio.h>
    /* calcula soma e media*/
int calculaSoma(int n1, int n2, int n3)
{
    int soma;

    soma = n1 + n2 + n3;

    return soma;


}

float calculaMedia(int n1, int n2, int n3)
{
    float media;

    media = (calculaSoma(n1, n2, n3))/3;
    printf("a media e %f\n", media);
    return 0;

}

int main()
{
    int n1, n2, n3;
    printf("insire as 3 notas: ");
    scanf("%d%d%d", &n1,&n2,&n3);

    calculaMedia(n1,n2,n3);

    return 0;
}


