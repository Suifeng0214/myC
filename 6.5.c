#include <stdio.h>
#include <algorithm> 
main()
{
    int i, j;
	int studentNum, subjectNum;
    scanf("%d%d", &studentNum, &subjectNum);
    int Grades[studentNum][subjectNum];
    int AVG[studentNum + subjectNum];
	
    for (i = 0; i < studentNum; i++){
		for (j = 0; j < subjectNum; j++){
			scanf("%d",&Grades[i][j]);
    	}
    }
    
	printf("\n");
	  
}
