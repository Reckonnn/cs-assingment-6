#include "random.h"
#include<stdio.h>
#include<math.h>
double evaluate(int *x,int *y,int n)
{
    double result=0;
    int i;
    for(i=0;i<n;i++)
    {
        result+=sqrt(pow((*(x+1*n+i))-(*(x+1)),2)-pow((*(y+1*n+i))-(*(y+1)),2));
        result/=n;
        return result;
    }
}

void main()
{
    int n,i;
    printf("Enter number of coloumns: ");
    scanf("%d",&n);
    int x[2][n],y[2][n];
    for(i=0;i<n;i++)
    {
        x[0][i]=random32();
        x[1][i]=random32();
        y[0][i]=random32();
        y[1][i]=random32();
    }
    double result=evaluate((int *)x,(int *)y,n);
    printf("Result= %f\n",result);
}
