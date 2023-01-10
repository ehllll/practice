#include <iostream>

using namespace std;

int main()
{
    int num0 = 0;
    int *num1 = &num0;
    int &num2 = num0; // 참조

    // cout << num0 << endl;
    // cout << *num1 << endl;
    // cout << num2 << endl;
    // cout << endl;

    // num0 = 20;
    // cout << num0 << endl;
    // cout << *num1 << endl;
    // cout << num2 << endl;
    // cout << endl;

    int n = 50;
    num1 = &n;
    cout << *num1 << endl;

    // int n = 50;
    // num1 = &n;
    // cout << *num1 << endl;
    // int *const num3 = &num0; // 바로 위 뭉텅이랑 같음 ( 참조도 주소를 못바꾼다 )

}