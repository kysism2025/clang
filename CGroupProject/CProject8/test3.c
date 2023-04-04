#include <stdio.h>

//날짜계산(년도,일수)
//월별일수={31,28,31,30,31,30,31,31,30,31,30,31}
//연수가4,100,400으로 나누어 떨어지는 해는 윤년으로 둔다.
//반복(일수>월별일수[달])
//일수:=일수-월별일수(달)
//날짜출력

void main() {

	int month_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int yy;
    int days;
    int addDays = 0;
    int isYeun = 0;
    int size = sizeof(month_days) / sizeof(month_days[0]);
    int i = 0;

    printf("년도를 입력하세요:");
    scanf_s("%d", &yy);
    printf("일수를 입력하세요:");
    scanf_s("%d", &days);

    if (yy % 4 == 0 && yy % 100 == 0 && yy % 400 == 0) {
        isYeun = 1;
    }

    for (i = 0; i < size; i++) {

        if (isYeun == 1) {
            addDays += month_days[i] + 1;
        }
        else {
            addDays += month_days[i];
        }
        
        if (days <= addDays) {
            if(days <= addDays)
                addDays -= month_days[i];

            break;
        }
    }

    printf("년도:%d\n", yy);
    printf("월:%d\n", i + 1);
    printf("일:%d\n", days - addDays -1);






}