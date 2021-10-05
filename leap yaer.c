main()
{
    int a;
    printf("Enter the yaer to cheack it is leap year or not\n");
    scanf("%d",&a);
    if(a%100==0)
    {
        if(a%400==0)
        printf("THE year %d is LEAP\n",a);
        else
            printf("non leap year");
    }
    else
    {
        if(a%4==0)
        printf("THE year %d is LEAP year\n",a);
        else
            printf("is not leap year");
    }
    getch();
}

