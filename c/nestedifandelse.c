main()
{
    int x,y,z;
    printf("enter the three number");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
            printf("%d",x);
        else
            printf("%d",z);
    }
    else
    {
        if(y>z)
            printf("%d",y);
        else
            printf("%d",z);
    }
}
