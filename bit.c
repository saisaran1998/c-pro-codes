#include<stdio.h>
#include<conio.h>
main()
{
  int a[100],i,count=0,n;
  printf("enter the no.of elements you want to read:");
  scanf("%d",&n);
  printf("give your elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]==0)
    {
      count=count+1;
    }
  }
  for(i=0;i<count;i++)
  {
    a[i]=0;
  }
  for(i=count;i<n;i++)
  {
    a[i]=1;
  }
  printf("your desired output:")
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
}
