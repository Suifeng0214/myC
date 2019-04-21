#include <stdio.h>
main()
{
    int i, j, k, l, lengh;
    scanf("%d%d", &i, &j);
    int numbers[i][j];
    int out1[i];
    for (k = 0; k < i; k++){
		for (l = 0; l < j; l++){
			scanf("%d",&numbers[k][l]);
    	}
    }
    
	printf("\n");

    for (k = 0; k < i; k++){
		for (l = 0; l < j; l++){
			printf("%d ",numbers[k][l]);
    	}
    	printf("\n");
    }
    
    printf("\n");
    
    for (k = 0; k < i; k++){
		for (l = 0; l < j; l++){
			out1[k] += numbers[k][l];
    	}
    	printf("*%d\n",out1[k]);
    	out1[k] /= j;
    }
    
    for (k = 0; k < i;k++){
    	printf("%d\n",out1[k]);
	}
}
