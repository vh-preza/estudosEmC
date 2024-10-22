#include <stdio.h>
#define N 5
#define M 2

typedef struct{

    float salario;
    int codigo;

} funcionario;

void inicializa(float Departamento[10][M], int i){

    int cod_depart;
    printf("Funcionario %d, entre com o codigo do departamento: ", i);
    scanf("%d", &cod_depart);
    printf("Entre com o salário: ");
    scanf("%f", &Departamento[cod_depart][i-1]);
}

int maiorElemento(int a[], int qt) 
{
    int maior = a[0];
    for(int i=1; i<qt; i++) {
        if(a[i] > maior) {
            maior = a[i];
        }
    }
    return maior;
}

int main(){

    float Departamento[10][M] = {0};
    for(int i=0; i<M; i++){
        inicializa(Departamento,i);
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<M; j++){
            printf("No departamento %d, do funcionario %d é %f\n", i+1, j+1, Departamento[i][j]);
        }
    }
    return 0;
}