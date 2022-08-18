#include<stdio.h>
#include<math.h>
int main()
    {
        int m,n,sum=0,i,term;
        printf("enter the value of m and n");
        scanf("%d%d",&m,&n);
        for(i=1;i<=m;i++)
        {
            term=pow(i,n);
            sum=sum+term;
        }
        printf("the sum of given series is %d",sum);
        return 0;
    }