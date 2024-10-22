#include <stdio.h>
#include <string.h>

void funcao(char*casa)
{
    printf("%s", casa);
}



int main()
{
    char*casa= "casa";

    funcao(casa);

    return 0;
}