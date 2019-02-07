#include <stdio.h>
main()
{
    int a, b, j, x;
    scanf("%d",&a);
    scanf("%d",&b);

    if (a>b){
        j=a-b;
        }
    else{
        j=b-a;
    }
    x = (a+b)*(j+1)/2;
    printf("%d\n", x);
}
