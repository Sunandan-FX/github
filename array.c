#include<stdio.h>
int main()
{
    int i,n,a[100000],max;//array size is a[100000]
    scanf("%d",&n);
    a[0] = 0;
    a[1] = 1;
    for(i=2;i<n;i++)
    {
       a[i] = a[i-1]+a[i-2];  
    }
    
    for(i=0;i<n;i++)
    {
        printf("fibonacci is  = %d\n",a[i]);
    }
    printf("p");
    return 0;
}