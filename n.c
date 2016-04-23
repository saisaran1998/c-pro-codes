#include<stdio.h>
main()
{
  int a[50],n,max;
  printf("enter the no.of numbers you want to enter:");
  scanf("%d",&n);
  printf("enter the numbers:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<n;i++)
  {
    if(max<a[i])
    {
      max=a[i];
    }
  }
  if(max==n)
  {
    for(i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
    sum1=((n)*(n+1)\2);
    printf("the missing number is %d",sum1-sum);
  }
  if(max<n)
  {
    printf("the missing number is %d",n);
  }
}
