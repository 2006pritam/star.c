#include<stdio.h>
main()
{
    int i,j,num,k,count,temp=1,alpha,temp1=1;
    printf("Enter number of rows\n");
    scanf("%d",&num);
    count=num-1;
    for(i=1;i<=num;i++)
    {
        for(k=1;k<=count;k++)
        {
          printf(" ");
        }
        alpha=temp;
        for(j=1;j<=i;j++)
        {
         printf("%d",alpha);
         alpha--;
        }
        temp=temp +(++temp1);
    printf("\n");
    count--;
    }
}
