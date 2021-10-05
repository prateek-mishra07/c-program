#include<stdio.h>
int main()
{
    int i,j,n,key;
    printf(" enter size of array\n");
    scanf("%d",&n);
    //printf("%d",n
    int arr[n];
    printf("enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
      for(j=1;j<=n;j++)
      {
          key=arr[j];
          i=j-1;
          while(i>=0 && arr[i]>key)
          {
               arr[i+1] = arr[i];
               i=j-1;

          }
         arr[i+1] = key;

      }
      for( i=0;i<n;i++)
      {
          printf("%d",arr[i]);
      }
    }





