#include <stdio.h>
#include <math.h>
    /*calcula a area corporal*/
float calculaArea(float p, int h)
{
    float area;
    
    area = (sqrt(p * h)) / 60;

    return area;
}

float compAreas(float a1, float a2)
{
    if(a1==a2)
    {
        printf("manteve a area inalterada\n");
        
    }
    else if(a1<a2)
    {   
        printf("aumentou a area corporal");
    }
    else if(a1>a2)
    {
        printf("diminui a area corporal");
    }

    return 0;
}

int main()
{
    int p1, p2, h1, h2;
    float p, a1, a2;

    printf("insira os valores do peso e altura iniciais: ");
    scanf("%f%d", &p1, &h1);
    printf("insira os valores do peso e altura finais: ");
    scanf("%f%d", &p2, &h2);

    a1 = calculaArea(p1, h1);
    a2 = calculaArea(p2, h2);

    compAreas(a1, a2);

    return 0;
}