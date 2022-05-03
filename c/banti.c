#include<stdio.h>
void main()
{
    int a[10],n,i,sum=0,max;
    float avg;
    printf("how many elelments are use?-");
    scanf("%d",&n);
    printf("enter the array elelment");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    avg=(float)sum/n;
    printf("\navarage=%f",avg);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\nmax=%d",max);

}
