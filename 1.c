#include<stdio.h>
void method(int n)
{
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        a[i]=1;
    }
    a[0]=0;
    for(j=2;j*j<=n;j++)
    {
        if(a[j-1]==1)
        {
            for(i=j*j;i<=n;i+=j)
            {
                a[i-1]=0;
            }
        }
    }
    for
   (i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            printf("%d\t",(i+1));
        }
    }
}
void main()
{
    int n;
    printf("Enter the number upto which the primr niumbers are to be printed: ");
    scanf("%d",&n);
    printf("The prime numbers are: ");
    method(n);
}
