#include <stdio.h>
main()
{
    int a[5], b[5], c = 0;
    int i, j;

    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for (i=0;i<5;i++){
        c += a[i] * b[i];
    }
    printf("%d\n",c);
}
