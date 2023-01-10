#include <iostream>

using namespace std;


int main()
{
    int num = 0;

    int *pointer = &num;

    cout << num << endl;
    cout << &num << endl;
    *pointer = 100;
    cout << num << endl;


    int *pNum0; // 이렇게 초기화안하면 에러발생
    cout << pNum0 << endl;
}