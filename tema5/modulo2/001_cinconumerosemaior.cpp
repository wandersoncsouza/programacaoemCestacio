#include <stdio.h>

int main(){
  int num, cont=0, maior=0;

  while(cont<5){

    printf("Digite um numero inteiro e positivo:");
    scanf("%d", &num);
    if(num<0){ printf("\nO numero tem que ser maior que 0!");}
    if(num>0){
      cont++;
      if(num>maior){
        maior=num;
      }
    }
  }
  printf("\nO maior numero digitado foi: %d",maior);

}
