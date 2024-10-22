#include <stdio.h>

/* Adicionar o numero de alunos e depois tirar a media de cada 1
   contando 2 notas*/

   int main(void){

    int i, n1;
    float nota1, nota2, media;

    printf("insira a quantidade de alunos:\n");
    scanf("%d", &n1);

    i=0;

    while(i<n1){
     
    printf("insira as duas notas do aluno\n");
    scanf("%f%f", &nota1, &nota2);

    media = (nota1 + nota2) / 2; 
    printf("a media e %f\n", media);

    i = i + 1;
    }
    return 0;
   }