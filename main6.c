#include <stdio.h>

// double avg(double,double);

// void main(){
//   double d1, d2, d3;
//   double a = 1.2, b = 3.4, c = 2.7;
  
//   d1 = avg(a,b);
//   d2 = avg(4.1,5.7);
//   d3 = avg(c,2.8);
//   printf("d1 = %f,d2 = %f,d3 = %f¥n", d1,d2,d3);
// }

// double avg(double l,double m){
//   double r = (l + m) / 2.0;
//   return r;
// }

// int max(int,int);
// void show(int);
// void line();

// void main(){
//   int n1 = 4, n2 = 5;
//   line();
//   show(n1);
//   show(n2);
//   printf("二つの数のうち、大きい数は、%dです。¥n",max(n1,n2));
//   line();
// }

// int max(int a,int b)
// {
//   if(a > b){
//     return a;
//   }
//   return b;
// }
// void show(int n)
// {
//   printf("数値：%d¥n",n);
//   return;
// }
// void line()
// {
//   printf("***********");
// }

int global = 10;

void func1(double,int);
void func2();

void main();

void main(){
  double a = 123.41;
  int b = 100;
  printf("main処理中¥n");
  printf("global=%d¥n",global);
  printf("a=%f b=%d¥n",a,b);
  printf("******************¥n");
  
  func1(3.1,4);
  func2();
}

void func1(double a,int b)
{
  printf("func1処理中¥n");
  printf("global=%d¥n",global);
  printf("a=%f b=%d¥n",a,b);
  printf("******************¥n");
}

void func2()
{
  double a = -4.1;
  int b = 2;
  printf("func2処理中¥n");
  printf("global=%d¥n",global);
  printf("a=%f b=%d¥n",a,b);
  printf("******************¥n");
}