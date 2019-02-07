#include <stdio.h>
main()
{
    int a1x, a2x, a3x;
    int a1y, a2y, a3y;
    int a1line, a2line, a3line, temp;
    scanf("%d",&a1x);
    scanf("%d",&a1y);
    //
    scanf("%d",&a2x);
    scanf("%d",&a2y);
    //
    scanf("%d",&a3x);
    scanf("%d",&a3y);
    //
    a1line = (a1x*a1x) + (a1y*a1y) ;
    a2line = (a2x*a2x) + (a2y*a2y) ;
    a3line = (a3x*a3x) + (a3y*a3y) ;

    temp = (a1line >= a2line)? a1line : a2line;
    temp = (temp >= a3line)? temp : a3line;

    if (temp == a1line){
        printf("%d\n",a1x);
        printf("%d",a1y);
    }
    else if (temp == a2line){
        printf("%d\n",a2x);
        printf("%d",a2y);
    }
    else if (temp == a3line){
        printf("%d\n",a3x);
        printf("%d",a3y);
    }
}
