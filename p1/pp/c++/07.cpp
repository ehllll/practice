#include <iostream>

using namespace std;

int main()
{
    //원의 넓이를 구하는 프로그램
    //반지름 * 반지름 * 파이
    const float PIE = 3.1415926535; //상수는 초기화의 방식으로 이용(변하면 안되므로)

    int r = 3;
    float s = r * r * PIE;
    cout << s << endl;
}