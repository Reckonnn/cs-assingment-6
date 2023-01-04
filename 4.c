#include "random.h"
#include<stdio.h>
#include<math.h>

double mean(int a[],int n)
{
    double m=0;
    int i;
    for(i=0;i<n;i++)
    {
        m+=a[i];
    }
    m/=n;
    return m;
}

double variance(int a[],int n,double mean)
{
    double v=0;
    int i;
    for(i=0;i<n;i++)
    {
        v+=pow((a[i]-mean),2);
    }
    v/=n;
    return v;
}

void main()
{
    int n,a[n],i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=random32();
    }
    double mean_result=mean(a,n);
    double variance_result=variance(a,n,mean_result);
    double standard_deviation=sqrt(variance_result);
    printf("Mean: %f\n",mean_result);
    printf("Variance: %f\n",variance_result);
    printf("Standard Deviation: %f\n",standard_deviation);
}
