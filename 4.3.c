#include <stdio.h>
main()
{
    int x;
    int a1x, a2x;
    int a1y, a2y;

    scanf("%d",&a1x);
    scanf("%d",&a1y);
    scanf("%d",&a2x);
    scanf("%d",&a2y);

    x = (a2x-a1x)*(a2y-a1y);
    if (x>0){
        printf("%d",x);
    }
    else{
        x = -x;
        printf("%d",x);
    }
}
