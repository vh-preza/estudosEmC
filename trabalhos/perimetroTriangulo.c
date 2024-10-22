#include <stdio.h> 
#include <math.h>

    /*calcular o perimetro de um triangulo a partir de seus vertices*/
int calculaDistancia1(int x1, int y1,int x2,int y2)
{
    int distancia1;

    distancia1 = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));

    return distancia1;

}

int calculaDistancia2(int x1, int y1,int x3,int y3)
{
    int distancia2;

    distancia2 = sqrt(pow(x1-x3, 2) + pow(y1-y3, 2));

    return distancia2;

}


int calculaDistancia3(int x2, int y2,int x3,int y3)
{
    int distancia3;

    distancia3 = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));

    return distancia3;

}

int main()
{
    int x1, x2,x3, y1, y2, y3, perimetro;

    printf("insira as cordenadas do primeiro ponto: ");
    scanf("%d%d", &x1, &y1);
    printf("insira as coordenadas do segundo ponto: ");
    scanf("%d%d", &x2, &y2);
    printf("insira as cordenadas do terceiro ponto: ");
    scanf("%d%d", &x3, &y3);
    

    perimetro = calculaDistancia1(x1, y1, x2, y2) + calculaDistancia2(x1, y1, x3, y3) + calculaDistancia3(x2, y2, x3, y3);

    printf("o perimetro e: %d\n", perimetro);

    return 0;

}