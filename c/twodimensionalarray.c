main()
{
    int i,j,A[4][4],B[4][4],C[4][4];
    printf("enter 16 number for first metrix");
    for(i=0;i<=3;i++)
    for(j=0;j<=3;j++)
    scanf("%d",&A[i][j]);
    printf("enter 16 number for second metrix");
    for(i=0;i<=3;i++)
    for(j=0;j<=3;j++)
    scanf("%d",&B[i][j]);
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            C[i][j]=A[i][j],B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}
