#include <stdio.h>
main()
{
int a,b,c,temp;
scanf("%d\n",&a);
scanf("%d\n",&b);
scanf("%d",&c);
  if (a>b)
  temp = b;
  else if (a<b)
  temp = a;
  if (temp>c)
  printf("%d\n",c);
  else
  printf("%d\n",temp);
}
