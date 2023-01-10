#include <iostream>

using namespace std;

int main()
{
    int a; //선언
    a = 7; // 대입

    int b = 3; // 초기화

    a = 5;
    b = 10;

    //변수는 사용되기 이전에 정의되어야 함
    // {int b;
    // {
    //     int a;
    //     b=3;
    // }
    //     a = 5;
    // }
    // b는 사용가능 a는 블록이 끝났후엔 사용못함

    
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}