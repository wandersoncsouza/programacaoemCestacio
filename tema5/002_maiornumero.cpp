#include <stdio.h>

int main(){

  int init, num, old_num;
  old_num = 0;
  for(init=1; init<=5; init++){
    printf("Digite o numero %d:\n", init);
    scanf("%d", &num);

    if(old_num<num)
      old_num = num;
  }
  printf("O maior numero é: %d", old_num);
}
