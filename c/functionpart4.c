#include<conio.h>
#include<stdio.h>
void main()
{
    int s,x,y;
     printf("enetr the two number");
    scanf("%d%d",&x,&y);
   s=add(x,y);
   printf("sum is %d",s);
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}
