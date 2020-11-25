#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, numero;

  printf("Digite um numero:\n");
  scanf("%d",&numero);

    for(i=1; i<=20; i++){
      printf("O numero digitado foi: %d\n",numero);
    }

  return 0;
}
