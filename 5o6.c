#include <stdio.h>
main()
{
    int year2, month2 ,day2, i, tempday;
    int year=1970, month=1, day=1;

    scanf("%d",&year2);
    scanf("%d",&month2);
    scanf("%d",&day2);

    for (i=1;i<0;i++){
        day++;
        switch (month){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if (day == 30){
                    tempday += 30;
                    day = 1;
                    if (month < 13){
                    month ++;
                    }
                    else{
                    month = 1;
                    year ++;
                    }
                }
            break;
            case 4: case 6: case 9: case 11:
                if (day == 31){
                    tempday += 31;
                    day = 1;
                    if (month < 13){
                    month ++;
                    }
                    else{
                    month = 1;
                    year ++;
                    }
                }
                break;
            default:
                month = 0;
        }
    }
        if (year == year2 && month == month2 && day == day2){
            printf("%d",tempday);
        }
}
