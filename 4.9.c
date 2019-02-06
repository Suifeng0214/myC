#include <stdio.h>
main()
{
int total,feet,tail,ck,rb,crab,temp;
    scanf("%d",&total);
    scanf("%d",&feet);
    scanf("%d",&tail);

    crab = total - tail;
    rb = (feet - crab*8 - 2*tail)/2 ; //­ì¦¡= 2*(rb+ck)+ 2*rb = total - crab*8
    ck = tail - rb;
    if (ck<0 || rb<0 || crab<0)
    {
          printf("%d",0);
    }
    else if (ck>=0 || rb>=0 || crab>=0)
    {
    printf("%d\n",ck);
    printf("%d\n",rb);
    printf("%d",crab);
    }
}
