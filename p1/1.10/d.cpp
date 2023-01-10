#include <iostream>

using namespace std;

int main()
{
    int num[] = {1, 2, 3};
    cout << num << endl; //배열의 이름만 적으면 배열의 주소가 출력됨
    int *pNum = num;

    cout << pNum[0] << endl;
    cout << pNum[1] << endl;
    cout << pNum[2] << endl;
    cout << endl;

    cout << pNum << endl;
    cout << pNum + 1 << endl; // int라서 주소값이 4씩 늘어남
    cout << pNum + 2 << endl;
    cout << endl;

    cout << *(pNum) << endl;
    cout << *(pNum + 1) << endl;
    cout << *(pNum + 2) << endl;
    cout << endl;

    cout << *pNum << endl;
    pNum++;
    cout << *pNum << endl;
}