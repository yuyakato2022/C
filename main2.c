#include <stdio.h>

/*
演算子を用いた計算のプログラム
*/

void main()
{
  // 各種演算
  printf("%d + %d = %d¥n", 5,2,5+2);
  printf("%d - %d = %d¥n", 5,2,5-2);
  printf("%d * %d = %d¥n", 5,2,5*2);
  printf("%d / %d = %d 余り %d ¥n", 5,2,5/2, 5 % 2);
  
  
  int a;
  int b = 3;
  int add, sub;
  double avg;
  a = 6;
  add = a + b;
  sub = a - b;
  avg = (a + b) / 2.0;
  printf("%d + %d = %d¥n", a,b,add);
  printf("%d - %d = %d¥n",a,b,sub);
  printf("%dと%dの平均値: %f¥n" ,a,b,avg);
  

  int a1=2,b1=2,c1=2,d1=2;    
  int a2=2,b2=2,c2=2,d2=2;    
  
  a1 = a1 + 1;
  b1 = b1 - 1;
  c1 = c1 * 2;
  d1 = d1 / 2;
  a2 += 1;
  b2 -= 1;
  c2 *= 2;
  d2 /= 2;    
  printf("a1=%d b1=%d c1=%d d1=%d¥n",a1,b1,c1,d1);
  printf("a2=%d b2=%d c2=%d d2=%d¥n",a2,b2,c2,d2);
  
  int i1,i2,j1,j2;
    double d1,d2,e1,e2;
  
    j1 = 3;
    j2 = 3;
  
    d1 = 1.23;
    d2 = 1.23;
    
    i1 = d1;        
    i2 = (int)d2;     
    e1 = j1;          
    e2 = (double)j2;    
    printf("d1 = %f d2 = %f¥n",d1,d2);
    printf("i1 = %d i2 = %d¥n",i1,i2);
    printf("j1 = %d j2 = %d¥n",j1,j2);  
    printf("e1 = %f e2 = %f¥n",e1,e2);
}
