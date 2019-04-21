#include <stdio.h>
#include <math.h>
#include <ctype.h>
main()
{
	int num=0, times, temp=0, i;
	
	scanf("%d",&num);
	scanf("%d",&times);
	for(i = 1; i <= times;i++){
		if (num % 10 != 0)
			temp = num % 10;
		num /= 10;
		if(temp != 0)
			printf("%d",temp);
		printf("%d",num);
		
		
	//	printf("\t\ttemp = %d",temp);
	//	printf("\tnum = %d",num);
		printf("\n");
	}
}
