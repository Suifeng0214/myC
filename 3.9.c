#include <stdio.h>
main()
{
    int a, b, c;
    int x, y;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    x = 2*(a*b+b*c+c*a) ;
    y = a*b*c;
    printf("%d\n",x);
    printf("%d\n",y);
}
