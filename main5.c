#include <stdio.h>

void main(){
  double d[3];
  double sum, avg;
  int i;
  d[0] = 1.2, d[1] = 3.7, d[2] = 4.1; sum = 0.0;
  for(i = 0; i < 3; i++){
    printf("%f",d[i]);
    sum += d[i];
  }
  
  printf("¥n");
  avg = sum / 3.0;
  printf("合計値:%f¥n", sum);
  printf("平均値:%f¥n", avg);
  
  int n[] = {5,4,3,2,1};
  int i;
  for(i =0; i<5; i++){
    printf("n[%d]=%d", i,n[i]);
  }
  printf("¥n");
  
  char s1[4] = { 'a','b','c','¥0' };
  char s2[] = "HelloWorld.";
  char s3[10];
  
  printf("文字列を入力してください。:");
  scanf("%s", s3);
  printf("s1 = %s¥n", s1);
  printf("s2 = %s¥n", s2);
  printf("s3 = %s¥n", s3);
  
  int a[3][4];
  int m,n;
  for(m = 0; m < 3; m++){
    for(n = 0; n < 4; n++){
      a[m][n] = m+n;
    }
  }
  for(m = 0; m < 3; m++){
    for(n = 0; n < 4; n++){
      printf("%d" ,a[m][n]);
    }
    printf("¥n");
  }
}
