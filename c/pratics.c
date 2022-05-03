main()
{
    int a,b,c,d,choice;
    float e,f,g;
    printf("\n1.squre area");
    printf("\n2.rectangle area");
    printf("\n3.percentage");

    printf("\nenter your choice =");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("enter the number=");
        scanf("%d",&a);
        c=a*a;
        printf("area of squre is %d",c);
        break;
        case 2:printf("enter the value of lengh=");
        scanf("%d",&a);
        printf("enter the value of width=");
        scanf("%d",&b);
        d=a*b;
        printf("area of rectangle is %d",d);
        break;
        case 3:printf("enter the come marks total=");
        scanf("%f",&e);
        printf("enetr the total marks=");
        scanf("%f",&f);
        g=e/f;
        printf("your perncetage is %f",g);


    }
}
