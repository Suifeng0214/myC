#include <stdio.h>
main()
{
    int i, j, k, lengh;
    scanf("%d",&lengh);
    int numbers[lengh];

    for (i = 0; i < lengh; i++){
        scanf("%d",&numbers[i]);
    }
    for (j = 0; j < lengh; j += 2){
        printf("%d ",numbers[j]);
    }
    printf("\n");
    for (k = 1; k < lengh; k += 2){
        printf("%d ",numbers[k]);
    }
}
