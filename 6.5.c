#include <stdio.h>
#include <algorithm.h>
main()
{
    int i, j;
    int test[5] = {3, 1, 2, 4, 8};
	int studentNum, subjectNum;
    scanf("%d%d", &studentGrade, &subjectGrade);
    int Grades[studentGrade][subjectGrade];
    int AVG[studentNum + subjectNum];
	
    for (i = 0; i < studentNum; i++){
		for (j = 0; j < subjectNum; j++){
			scanf("%d",&Grades[i][j]);
    	}
    }
    
    printf("%d\n",sort(test,test+5));
	printf("\n");
	  
}
