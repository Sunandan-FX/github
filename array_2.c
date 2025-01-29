#include<stdio.h>
int main()
{
    int a[5]={60,70,55,95,50};
    int max,i,N;
    scanf("%d",&N);
    max = a[0];
    for(i=1;i<N;i++)
    {
      if(max < a[i])
      {
          max=a[i];
      }

    }
    printf("%d\n",max);
    return 0;

}
