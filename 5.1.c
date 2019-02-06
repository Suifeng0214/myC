#include <stdio.h>
main()
{
    int n,i,j,k,m;
    scanf("%d",&n);
    scanf("%d",&i);
    m = n;
    for(k=1;k<i;k++) //¡i¦A¡j­¼´X¦¸
        n=n*m;
    printf("%d\n",n);
}
