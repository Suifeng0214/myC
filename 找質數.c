#include <stdio.h>
main()
{
    int flag = 0;
    for (int num = 2; num < 100; num++){
        flag = 0;
        for(int i = 2; i < num; i++){
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
