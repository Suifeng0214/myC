#include <stdio.h>
main()
{
    int i, j, lengh;
    scanf("%d",&lengh);
    int numbers[lengh];

    for (i=0;i<lengh;i++){
        scanf("%d",&numbers[i]);
    }
    for (j=lengh-1;j>=0;j--){
        printf("%d ",numbers[j]);
    }
}
