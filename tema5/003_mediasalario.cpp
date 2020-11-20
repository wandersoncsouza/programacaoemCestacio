#include <stdio.h>
//#include <stdiob.h>

int main(){

  int i;
  float salario, maior_salario=0, media_salarial=0, limite=5;

  for(i=1; i<=limite; i++){
    printf(" - Digite o seu salario:");
    scanf("%f", &salario);

    media_salarial+=salario;

    if(salario>maior_salario)
      maior_salario=salario;
  }
  printf("O maior salario digitado foi: %.2f\n",maior_salario);
  printf("O total de salarios foi: %.2f\nA media salarial e: %.2f\n", media_salarial, media_salarial/limite);
}
