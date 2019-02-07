#include <stdio.h>
main()
{
    int a, b;
    int a1x, a2x;
    int a1y, a2y;

    scanf("%d",&a1x);
    scanf("%d",&a1y);
    scanf("%d",&a2x);
    scanf("%d",&a2y);

    a = (a2x-a1x>0)? a2x-a1x:a1x-a2x;
    b = (a2y-a1y>0)? a2y-a1y:a1y-a2y;
    printf("%d\n",2*a+2*b);
}
