//정수 형식이 올 곳에 열거형 사용
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
    //정수 형식일 올 곳에 열거형을 사용하는 예제 코드
    //const char* titles[] = {"국어","영어","수학"};
    const char* titles[MAX_SUBJECT] = { "국어","영어","수학" };
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