#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 10

/*testando array e random juntos*/

int  main()
{


    int a[T] = {0}, i, total = 0, j = 0;

    srand(time(NULL));
   
    for(i = 1; i <= T; i++)
    {
        printf("%s%13s%26s%39s\n", "Elemento", "Valor", "fatorAleatorio", "somatorioTotal");
        
        for(i = 0;i <=9 ;i++)
        {
                j = rand() % 6;
                a[i] = i + 1;
                total += j;

            printf ("%7d%13d%26d%39d\n", i, a[i], j, total);

        }
    }

    return 0;
}