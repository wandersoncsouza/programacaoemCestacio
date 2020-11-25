#include <stdio.h>

int main(){

  int cont, cont_aluno=1;
  float nota=0, acumula=0;
  while (cont_aluno<6) {
    for(cont=1;cont<4;cont++) {
      printf("\nInforme a nota %d do aluno %d:",cont, cont_aluno);
      scanf("%f", &nota);
      //cont_nota++;
      acumula+=nota;
    }
    printf("\nA media da nota do aluno %d e:%.2f", cont_aluno, acumula/3);
    cont_aluno++;
    acumula=0;
  }

}
