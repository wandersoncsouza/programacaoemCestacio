#include <stdio.h>

int main(){

  int i, n, controle=3;
  float nota, media=0;

  for(i=1; i<=4; i++){

    for(n=1; n<=controle; n++){
      printf("\n\nInsira a nota %d do aluno %d:", n, i);
      scanf("%f", &nota);
      media+=nota;

      printf("media: %.2f", media);
    }
    printf("\nA media do aluno %d e %.2f:", i, media/controle);
    if(media/controle>=7){
      printf("\nAluno aprovado!");
    } else{
      printf("\nAluno reprovado!");
    }
  }



}
