//���� ������ �� ���� ������ ���
//Program.cpp

#include <iostream>
using namespace std;

enum Subject
{
    KOREAN, ENGLISH, MATH, MAX_SUBJECT
};

enum ScoreConst
{
    DEF_SCORE = -1, MIN_SCORE = 0, MAX_SCORE = 100
};

int main()
{
    //���� ������ �� ���� �������� ����ϴ� ���� �ڵ�
    //const char* titles[] = {"����","����","����"};
    const char* titles[MAX_SUBJECT] = { "����","����","����" };
    int scores[MAX_SUBJECT] = { DEF_SCORE,DEF_SCORE,DEF_SCORE };

    scores[KOREAN] = 90;
    scores[ENGLISH] = MAX_SCORE;
    scores[MATH] = MIN_SCORE;

    for (int si = 0; si < MAX_SUBJECT; si++)
    {
        cout << titles[si] << ":" << scores[si] << endl;
    }

    return 0;
}