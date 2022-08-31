#include <stdio.h>

void main(){
  int i;
  for(i = 1;i <= 5;i++){
      printf("%d", i);
  }
  printf("¥n");
  
  int i,j;
  for(i = 1; i<= 2; i++){
    for(j = 1; j <= 3; j++){
      printf("%d+%d=%d ",i,j,i+j);
    }
    printf("¥n");
  }
  
  int i = 0;
  do{
    printf("%d", i);
    i++;
  }while(i <= 5);
    printf("¥n");
  
  int i, num;
  printf("回数を入力:");
  scanf("%d" ,&num);
  printf("whileで実行");
  
  i = 1;
  while(i <= num){
    printf("*");
    i++;
  }
  printf("¥n");
  printf("do-whileで実行");
  
  i = 1;
  do{
    printf("*");
    i++;
  }while(i <= num);
  printf("¥n");
  
  int num;
  printf("負の値で、ループから抜けます。¥n");
  scanf("%d" ,&num);
  
  while(1){
    printf("数値を入力：");
    scanf("%d",&num);
    if(num < 0){
      break;
    }
  }
  printf("終了¥n");
  
}