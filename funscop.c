//function {}-scope/lifepan/limit
#include<stdio.h>
void add(int,int);					
void sub(int,int);
int main()
{
   int a,b;
   printf("\n Enter the Two Number:");
   scanf("%d %d",&a,&b);                //real arg
   add(a,b);
   sub(a,b);
   
   return 0;
   	
}
void add(int x,int y)                   //formal arg
{
	printf("\n Addition=%d",x+y);
	
}
void sub(int m,int n)                   //formal arg
{
	printf("\n Subtraction=%d",m-n);
}