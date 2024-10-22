#include <stdio.h>

int menu()
{
    int figura;

    printf("               \n");
    printf("               \n");
    printf("1 - quadrado\n");
    printf("2 - retangulo\n");
    printf("3 - triangulo\n");
    printf("4 - trapezio\n");
    printf("5 - FIM\n");
    printf("insira a figura desejada: ");
    scanf("%d", &figura);

    return figura;

}

int quadrado()
{
    int lado, area;

    printf("insire o lado: ");
    scanf("%d", &lado);
    
    area = lado * lado;

    return area;

}

int retangulo()
{
    int area, b, h;

    printf("insire base e altura: ");
    scanf("%d%d", &b, &h);

    area = b * h;

    return area;
}

int triangulo()
{
    int area, b, h;

    printf("insire base e altura: ");
    scanf("%d%d", &b, &h);

    area = (b * h) / 2;

    return area;
}

int trapezio()
{
    int area, b1, b2, h; 

    printf("insire a base maior, a menor e a altura: ");
    scanf("%d%d%d", &b1, &b2, &h);

    area = ((b1 + b2) * h) / 2;

    return area;
}

int main()
{
    int escolha, area;

    escolha = menu();

    while(escolha!=5)
    {
        if(escolha == 1)
        {
            area = quadrado();
            printf("a area e: %d\n", area);

        }

        else if(escolha ==2)
        {
            area = retangulo();
            printf("a area e: %d\n", area);
        }   

        else if(escolha == 3)
        {
            area = triangulo();
            printf("a area e: %d\n", area);
        }
        
        else if( escolha == 4)
        {
            area = trapezio();
            printf("a area e: %d\n", area);
        }

    escolha = menu();
    
    }

    if (escolha ==  5)
    {
        printf(" FIM \n");
    }

    return 0;
}

