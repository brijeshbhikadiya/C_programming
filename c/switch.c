main()
{
    int choice,a,b,s;
    printf("\n1.Addition");
    printf("\n2.odd/even");
    printf("\n3.naturally number are selected");

    printf("\n\nEnter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:printf("enter two number");
     scanf("%d%d",&a,&b);
     s=a+b;
     printf("\n the sum is %d",s);
     break;
    case 2:printf("enter a number");
        scanf("%d",&a);
        if(a%2==0)
            printf("even number");
        else
            printf("odd number");
        break;
    case 3:printf("enter the number");
        scanf("%d",&a);
        for(b=1;b<=a;b++)
            printf("%d",b);
        break;
    }


}
