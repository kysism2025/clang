#include <stdio.h>

//��¥���(�⵵,�ϼ�)
//�����ϼ�={31,28,31,30,31,30,31,31,30,31,30,31}
//������4,100,400���� ������ �������� �ش� �������� �д�.
//�ݺ�(�ϼ�>�����ϼ�[��])
//�ϼ�:=�ϼ�-�����ϼ�(��)
//��¥���

void main() {

	int month_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int yy;
    int days;
    int addDays = 0;
    int isYeun = 0;
    int size = sizeof(month_days) / sizeof(month_days[0]);
    int i = 0;

    printf("�⵵�� �Է��ϼ���:");
    scanf_s("%d", &yy);
    printf("�ϼ��� �Է��ϼ���:");
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

    printf("�⵵:%d\n", yy);
    printf("��:%d\n", i + 1);
    printf("��:%d\n", days - addDays -1);






}