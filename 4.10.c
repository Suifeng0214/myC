#include <stdio.h>
main()
{
int a1x,a1y,a2x,a2y,b1x,b1y,b2x,b2y,c1x,c1y,c2x,c2y,a1a2x,a1a2y,b1b2x,b1b2y,c1c2x,c1c2y;

scanf("%d",&a1x);
scanf("%d",&a1y);
scanf("%d",&a2x);
scanf("%d",&a2y);
scanf("%d",&b1x);
scanf("%d",&b1y);
scanf("%d",&b2x);
scanf("%d",&b2y);
scanf("%d",&c1x);
scanf("%d",&c1y);
scanf("%d",&c2x);
scanf("%d",&c2y);

a1a2x = a2x-a1x;
a1a2y = a2y-a1y;
b1b2x = b2x-b1x;
b1b2y = b2y-b1y;
c1c2x = c2x-c1x;
c1c2y = c2y-c1y;

if ((a1a2x + b1b2x == c1c2x && a1a2y + b1b2y == c1c2y) ||
    (b1b2x + c1c2x == a1a2x && b1b2y + c1c2y == a1a2y) ||
    (a1a2x + c1c2x == b1b2x && a1a2y + c1c2y == b1b2y) ||
    (a1a2x + b1b2x == -c1c2x && a1a2y + b1b2y == -c1c2y))
    puts("1");
else
    puts("0");
}
