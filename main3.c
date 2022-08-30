#include <stdio.h>

void main(){
  int num;
  printf("1-3の値を入力してください:");
  scanf("%d", &num);
  if(num == 1){
    printf("one¥n");
  }else if(num == 2){
    printf("two¥n");
  }else{
    printf("不適切な値です。¥n");
  
  int dice;
  printf("1から6の数値を入力してください:");
  scanf("%d", &dice);
  
  if(1 <= dice && dice <= 6){
    if(dice == 2 || dice == 4 || dice ==6){
      printf("丁です。¥n");
    }else{
      printf("半です。¥n");
    }
  }else{
    printf("範囲外です¥n");
  }
 
 int num;
 printf("1-3の値を入力してください");
 scanf("%d", &num);
 switch(num){
    case 1:
      printf("one");
      break;
    case 2:
      printf("two");
      break;
    case 3:
      printf("three");
      break;
    default:
      printf("不適切");
      break;
 }
}