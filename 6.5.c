#include <stdio.h>
#include <algorithm> 
main()
{
    int i, j;
	int studentNum, subjectNum;
    scanf("%d%d", &studentNum, &subjectNum);
    int Grades[studentNum][subjectNum];
    int AVG[studentNum + subjectNum];
    
    for (i = 0; i < studentNum + subjectNum;i++){
    	AVG[i] = 0;
	}
	
    for (i = 0; i < studentNum; i++){
		for (j = 0; j < subjectNum; j++){
			scanf("%d",&Grades[i][j]);
    	}
    }
    
	printf("\n");
	//=-=-=-=-=-=-=-=
    for (i = 0; i < studentNum; i++){
		for (j = 0; j < subjectNum; j++){
			AVG[i] += Grades[i][j];
    	}
    	AVG[i] /= subjectNum;
    }
    for (i = studentNum; i < studentNum + subjectNum; i++){
		for (j = 0; j < studentNum; j++){
			AVG[i] += Grades[j][i-studentNum];
    	}
    	AVG[i] /= studentNum;
    }
    //=-=-=-=-=-=-=-=
    for (i = 0; i < studentNum + subjectNum;i++){
    	printf("%d\n",AVG[i]);
	}
}
