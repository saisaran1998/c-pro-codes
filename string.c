#include<stdio.h>
main()
{
  char a[100];
  int i,m,n;
  printf("enter the string:");
  scanf("%s",a);
  printf("enter the upper limit:");
  scanf("%d",m);
  printf("enter the lower limit:");
  scanf("%d",n);
  printf("your requried string is:");
  for(i=n;i<m;i++)
  {
    printf("%c",a[i]);
  }
}
  
