#include <iostream>

using namespace std;

int main()
{
    float num0 = 0.1f;
    float num1 = 0.02f * 5.0f;

    if (num0 == num1)
        cout << "Ok" << endl;

    cout.precision(64); // 실수끼리 비교하는 알고리즘은 별로 좋지않음
    cout << num0 << endl;
    cout << num1 << endl;
}