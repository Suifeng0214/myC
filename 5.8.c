#include <stdio.h>
main()
{
    int formin, formout, forminX = 1;
    int digits,tenthdg;
    int temp, i;
    scanf("%d",&formin);
    scanf("%d",&digits);
    int digit[digits];
    int temp2[digits];

    for (i=0;i<digits;i++){
        scanf("%d",&digit[i]);
    }
    scanf("%d",&formout);

    for (i=0;i<digits-2;i++){
        temp *= formin;
    }

    temp2[0] = temp;
    for (i=0;i<digits;i++){
        temp2[i+1] = temp2[i]/formin;
    }

    for (i=0;i<digits;i++){
    tenthdg +=  digit[i]*temp2[i];
    }


    if (formin == formout){
        for (i=0;i<digits;i++){
            printf("%d\n",digit[i]);
        }
    }
    else{
        switch (formin){
            case 2:
                switch (formout){
                    case 8:

                    case 10:

                break;
                }
            case 8:
                switch (formout){
                    case 2:

                    case 10:

                break;
                }
            case 10:
                switch (formout){
                    case 2:

                    case 8:

                break;
                }
        break;
        }
    }
    printf("%d\n",tenthdg);
}
