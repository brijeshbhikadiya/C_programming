#include<conio.h>
#include<stdio.h>
void add(int,int);
void main()
{
    int x,y;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    add(x,y);
}
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("sum is %d",c);
}
