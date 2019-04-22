#include <stdio.h>
main()
{
    int i, j, k, l, column, row;
    scanf("%d%d", &column, &row);
    int box[column][row];
    
    for (i = 0; i < column; i++){
		for (j = 0; j < row; j++){
			scanf("%d",&box[i][j]);
    	}
    }
    
	printf("\n");

    for (i = 0; i < column; i++){
		for (j = 0; j < row; j++){
			//top:
			if (i == 0
			 && j == 0
			 && box[i][j] > box[i+1][j]
			 && box[i][j] > box[i][j+1]){
			 	printf("%d\n", box[i][j]);	
			}
			if (i == 0
			 && j == row - 1
			 && box[i][j] > box[i+1][j]
			 && box[i][j] > box[i][j-1]){
			 	printf("%d\n", box[i][j]);	
			}
			if (i == 0
			 && j != row - 1
			 && j != 0
			 && box[i][j] > box[i+1][j]
			 && box[i][j] > box[i][j+1]
			 && box[i][j] > box[i][j-1]){
			 	printf("%d\n", box[i][j]);	
			}
			//bot:
			if (i == column - 1
			 && j == 0
			 && box[i][j] > box[i-1][j]
			 && box[i][j] > box[i][j+1]){
			 	printf("%d\n", box[i][j]);	
			}
			if (i == column - 1
			 && j == row - 1
			 && box[i][j] > box[i-1][j]
			 && box[i][j] > box[i][j-1]){
			 	printf("%d\n", box[i][j]);	
			}
			if (i == column - 1                        
			 && j != row - 1
			 && j != 0
			 && box[i][j] > box[i-1][j]
			 && box[i][j] > box[i][j+1]
			 && box[i][j] > box[i][j-1]){
			 	printf("%d\n", box[i][j]);	
			}
    	}
    }
}
