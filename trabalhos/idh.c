#include <stdio.h>

/*calcula o idh*/

float calculaidh(float e,float l,float r)
{
    int idh;

    if(e>= l+r)
    {
        idh = e * l * r / ((e + l+ r)/3);
    }
    else
    {
        idh = (e + l + r)/3;

    }

    return idh;
}

int main()
{
 
    float idh, e, l, r;

    printf("insira os numeros de educacao, longevidade e riqueza: ");
    scanf("%f%f%f", &e, &l, &r);

    idh = calculaidh(e, l, r);

    printf("o idh e: %f", idh);

    return 0;
}