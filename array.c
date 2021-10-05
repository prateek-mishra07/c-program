main()
{
    int i,a[10],sum,total;
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
         sum=sum+a[i];
    //total=sum;
    printf("sum is %d",sum);

}
