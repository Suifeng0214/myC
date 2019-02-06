#include <stdio.h>
main()
{
    int ax=0, ay=0,t, t1, t2, t3, c1, c2, c3;
    scanf("%d",&t1);
    scanf("%d",&c1);
    scanf("%d",&t2);
    scanf("%d",&c2);
    scanf("%d",&t3);
    scanf("%d",&c3);

    for(t=0;t<t3; t++)
    {
        if(t<t1)
       {
           ay += 10;
       }
       else  if (t>=t1 && t<t2)
            {
            if(c1==1)
               ax -= 10;
            if(c1==2)
               ax += 10;
            if(c1==3)
               break;
            }
       else  if (t>=t2 && t<=t3)
            {
            if(c2==c1)
                ay -= 10;
            else if(c2==3)
                break;
            else
                ay += 10;
            }

    }
    printf("%d\n",ax);
    printf("%d\n",ay);

}

