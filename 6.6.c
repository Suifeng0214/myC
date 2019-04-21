#include <stdio.h>
main()
{
    int i, j, k, l, lengh;
    scanf("%d%d", &i, &j);
    int num[i][j];
    for (k = 0; k < i; k++){
		for (l = 0; l < j; l++){
			scanf("%d",&num[k][l]);
    	}
    }
    
	printf("\n");

    for (k = 0; k < i; k++){
		for (l = 0; l < j; l++){
			if ((k == 0) && (num[k][l] > num[k+1][l])){
				if ((l == 0) && (num[k][l] > num[k][l+1])){
					printf("%d\n",num[k][l]);
				}
				if ((l == j-1) && (num[k][l] > num[k][l-1])){
					printf("%d\n",num[k][l]);
				}
				if ((l != 0) && (l != (j-1))){
					if ((num[k][l] > num[k][l-1]) && (num[k][l] > num[k][l+1])){
						printf("%d\n",num[k][l]);
					}
				}
			}
			if ((num[k][l] > num[k+1][l])
			&& (num[k][l] > num[k-1][l])
			&& (num[k][l] > num[k][l-1])
			&& (num[k][l] > num[k][l+1])){
		    	printf("%d\n",num[k][l]);
			}
    	}
    }
}
