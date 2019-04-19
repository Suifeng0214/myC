#include <stdio.h>
#include <math.h>
main()
{
	int n, i, num, flag=0, times=0;
	
	scanf("%d", &n);
	for (num = 2 ;;num++){
		flag = 0;
		for (i = 2; i <= sqrt(num);i++){
			if(num % i == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			if(n % num == 0){
				printf("%d\n",num);
				while(n % num == 0){
					times++;
					n /= num;
					if (n == 1){
						break;
					}
				}
				printf("%d\n",times);
				times = 0;
			}
		} 
		if (n == 1)
			break;
		}
	
	return 0;
}
