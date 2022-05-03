main()
{
    int x=1,y;
    while(x<=5)
    {
        printf("enter a number");
        scanf("%d",&x);
        if(x>0)
            break;
        x++;
    }
    x==6?printf("ends normally"):printf("applied break");
}
