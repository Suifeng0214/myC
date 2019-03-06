#include <stdio.h>
main()
{
    int x, y, x1, y1, x2, y2;
    int  dx1, dy1, dx2, dy2;
    int tempdx, tempdy;
    int i, t;

    scanf("%d%d", &x,&y);
    scanf("%d%d", &x1,&y1);
    scanf("%d%d", &x2,&y2);
    scanf("%d%d", &dx1,&dy1);
    scanf("%d%d", &dx2,&dy2);
    scanf("%d", &t);

    for (i=0;i<t;i++){
        x1 += dx1;
        y1 += dy1;
        x2 += dx2;
        y2 += dy2;
        if (x1 == x2 && y1 == y2)
            tempdx = dx1;
            tempdy = dy1;
            dx1 = dx2;
            dy1 = dy2;
            dx2 = tempdx;
            dy2 = tempdy;
        if (x1 == 0 || x1 == x)
            dx1 = -dx1;
        if (y1 == 0 || y1 == y)
            dy1 = -dy1;
        if (x2 == 0 || x2 == x)
            dx2 = -dx2;
        if (y2 == 0 || y2 == y)
            dy2 = -dy2;
    }
    printf("%d\n",x1);
    printf("%d\n",y1);
    printf("%d\n",x2);
    printf("%d\n",y2);
}
