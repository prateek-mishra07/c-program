main()
{
    int a;
    printf("Enter number to check it is even or odd");
    scanf("%d",&a);
    if((a/2)*2==a)
    //if(a%2==0)
    {
       printf("The number is even");

    }
    if((a/2)*2!=a)
    //if(a%2>0)
    {
        printf("Tne number is odd");
    }
    getch();
}
