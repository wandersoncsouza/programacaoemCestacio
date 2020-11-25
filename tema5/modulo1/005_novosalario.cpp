#include <stdio.h>

int main(){

  int i, maior=0;
  float perc_reajuste, salario, vlr_reajuste, reajuste, maiorreajuste=0;
  printf("Informe o percentual de reajuste dos funcionnarios:");
  scanf("%f", &perc_reajuste );

  for(i=1; i<=5; i++)
  {
    printf("\n\nInforme o salario do funcionario %d:",i);
    scanf("%f", &salario);
    vlr_reajuste=(salario*perc_reajuste/100);
    reajuste=salario+vlr_reajuste;
    printf("O novo salario do funcionario %d e: %.2f ",i, reajuste);

    if (reajuste>maiorreajuste) {
      maiorreajuste=reajuste;
      maior=i;
    }
  }
  printf("\nO maior dos resjustes e do funcionario: %d com o salario total de: %.2f\n",maior, maiorreajuste);
}
