/*takes noothing and return noting*/

#include<conio.h>
#include<stdio.h>
void main()
{
    void add(void);
    add();
    add();
}
 void add()
{
    int a,b,c;
    printf("\nenter the two number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nsum is %d",c);
}
