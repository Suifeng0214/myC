#include <stdio.h>
main()
{
    int formin, formout;
    int digits,tenthdg=0, tempDG;
    int temp, i, x=1;
    scanf("%d",&formin);
    scanf("%d",&digits);
    int digit[digits];
    int temp2[digits];

    for (i=0;i<digits;i++){
        scanf("%d",&digit[i]);
    }
    scanf("%d",&formout);

    temp = formin;
    for (i=0;i<digits-2;i++){
        temp *= formin;
    }

    temp2[0] = temp;
    for (i=0;i<digits-1;i++){
        temp2[i+1] = temp2[i]/formin;
    }

    for (i=0;i<digits;i++){
    tenthdg +=  digit[i]*temp2[i];
    }
    tempDG = tenthdg;

    for (;;){
        if (tenthdg/formout >= formout){
            tenthdg /= formout;
            x++;
        }else{
            break;
        }
    }

    int out[x+1];

    for (i=x;i>=0;i--){
        out[i] = tempDG % formout;
        tempDG /= formout;
    }

    if (formin == formout){
        for (i=0;i<digits;i++){
            printf("%d\n",digit[i]);
        }
    }
    else{
        for (i=0;i<x+1;i++){
            printf("%d\n",out[i]);
        }
    }
}
