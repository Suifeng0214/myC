#include <stdio.h>
main()
{
    int flag, num, i;
	for (num = 2; num < 10000; num++){
        flag = 0;
        for(i = 2; i < num; i++){
            if (num % i == 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            printf("%d ",num);
        }
    }
}
