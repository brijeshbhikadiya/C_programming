main()
{
    add();
    isEven();
    add();
    banti();
}
add()
{
    int a,b,c;
    printf("\nenter a two number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nsum is %d",c);
}

isEven()
{
    int d;
    printf("\nenter a number");
    scanf("%d",&d);
    if(d%2==0)
        printf("\neven number");
    else
        printf("\nodd number");
}

banti()
{
    isEven();
}
