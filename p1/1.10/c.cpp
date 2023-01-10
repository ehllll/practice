#include <iostream>

using namespace std;

int main()
{
    int num0 = 10;
    const int *pNum0 = &num0; // 변수값 못바꿈

    int num1 = 20;
    pNum0 = &num1;

    int *const pNum1 = &num0; // 주소값 못바꿈
    *pNum1 = 30;
    cout << *pNum1 << endl;

    const int *const pNum3 = &num0; // 둘 다 못바꿈
    //*pNum3 = 30;
    //pNum3 = &num1;
}