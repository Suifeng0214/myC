#include <stdio.h>
main()
{
    int i, j, k, lengh;
    scanf("%d", &lengh);
    int numbers[lengh];

    for (i = 0; i < lengh; i++){
        scanf("%d",&numbers[i]);
    }
    
    for (j = 0; j < lengh; j++){
    	if (abs(numbers[j]) % 2 == 1){
    		printf("%d ", numbers[j]);
    	}
    }
    
    printf("\n");
    
    for (j = 0; j < lengh; j++){
    	if (abs(numbers[j])% 2 == 0){
    		printf("%d ", numbers[j]);
    	}
    }
}
