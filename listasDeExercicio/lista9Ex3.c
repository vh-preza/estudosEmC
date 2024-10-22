#include <stdio.h>

/*analisa 5 alunos de uma turma, exibe nome a media do aluno de 2 provas e a situação dele comparando com a turma*/

struct _aluno
{
    char nome[30];
    float notas[2];

};

typedef struct _aluno aluno;

struct _turma
{
    aluno a[5];
}; 

typedef struct _turma turma;

void exibe(turma T,float media)
{

    for(int i=0; i<5;i++){
    printf("o aluno: %s\n", T.a[i].nome);
    printf("a media do aluno e: %f\n", (T.a[i].notas[0]+T.a[i].notas[1])/2);

    if(((T.a[i].notas[0]+T.a[i].notas[1])/2)>media){
        printf("aluno %s esta a cima da media\n", T.a[i].nome);
    }   
    else
    {
        printf("o aluno %s esta a baixo da media\n", T.a[i].nome);
    }

    } 
}

int main()
{
    turma T;
    float media;
    float notasTotais = 0;
    char a;

    for(int i=0; i<5; i++)
    {
        printf("insira o nome do aluno %d\n", i+1);
        scanf("%s", T.a[i].nome);
        printf("insira a primeira nota do aluno\n");
        scanf("%f", &T.a[i].notas[0]);
        printf("insira a segunda nota do aluno\n");
        scanf("%f", &T.a[i].notas[1]);

        notasTotais = T.a[i].notas[0] + T.a[i].notas[1] + notasTotais;
    }
    media = notasTotais / 10;

    exibe(T, media);
    return 0;
}