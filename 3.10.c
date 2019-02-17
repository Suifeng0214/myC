#include <stdio.h>
main()
{
    int a, b, c, d, e, x;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);

    x = 2*(a*b+b*c+c*a) + ((a-2*e)*d*8) + ((b-2*e)*d*8) + ((c-2*e)*d*8);
    printf("%d\n",x);
}
