#include<stdio.h>
void main()
{
    float p;
    printf("enetr the percentage:");
    scanf("%f",&p);
    if(p>=80&&p<=99)
    {
        printf("distration");
    }
    else if(p>=60&&p<=79)
    {
        printf("first class");
    }
    else if(p>=50&&p<=59)
    {
        printf("second class");
    }
    else
    {
        printf("you are fail");1
    }
}
