#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
    int id;
    double val;
    char nome[100];
}Curso;
 
typedef struct{
    char nomeAluno[500];
    int id, credits;
}Aluno;
 
void cursoBuilder(int p, Curso *v){
    scanf("%d%*c", &v[p].id);
    scanf("%lf%*c", &v[p].val);
    scanf("%[^\n]%*c", v[p].nome);
    //fgets(v[p].nome, 100, stdin);
}
 
void alunoBuilder(int p, Aluno *v){
    scanf("%[^\n]%*c", v[p].nomeAluno);
    //fgets(v[p].nomeAluno, 500, stdin);
    scanf("%d%*c", &v[p].id);
    scanf("%d%*c", &v[p].credits);
}
 
void printOut(int n, Curso *cursos, int m, Aluno *alunos){
    int i, j;
    double mensalidade;
    for(i=0; i<m; i++){//percorre alunos
        mensalidade = 0;
        for(j=0; j<n; j++){//percorre cursos
            if(alunos[i].id == cursos[j].id){
                mensalidade = alunos[i].credits * cursos[j].val;
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", alunos[i].nomeAluno, cursos[j].nome, alunos[i].credits, cursos[j].val, mensalidade);
            }
        }
    }
}
 
 
int main(){
    //LER CURSOS
    int n;
    scanf("%d%*c", &n);
 
    Curso *cursos = malloc(n*sizeof(Curso));
 
    //printf("\n\n%d\n\n", n);
 
    int i;
    for(i=0; i<n; i++){
        cursoBuilder(i, cursos);
        //printf("Curso %d: %d\t%.2lf\t%s\n", i+1, cursos[i].id, cursos[i].val, cursos[i].nome);
    }
 
    //LER ALUNOS
    int m;
    scanf("%d%*c", &m);
 
    Aluno *alunos = malloc(m*sizeof(Aluno));
 
    //printf("\n\n%d\n\n", m);
 
    for(i=0; i<m; i++){
        alunoBuilder(i, alunos);
        //printf("Aluno %d: %s\t%d\t%d\n", i+1, alunos[i].nomeAluno, alunos[i].id, alunos[i].credits);
    }
 
    printOut(n, cursos, m, alunos);
 
    free(alunos);
    free(cursos);
    return 0;
}