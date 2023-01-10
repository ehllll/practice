#include <iostream>

using namespace std;

int main()
{
    //데이터형 변환 : 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때

    int a = 3.141592;
    cout << a << endl;

    //강제적으로 데이터 변환
    //typeName(a) (typeName)a
    char ch = 'M';
    cout << (int)ch << " " << int(ch) << endl;

    //static_cast<typeName> // 데이터형 이름을 선언해주는 방식(강제형변환과 동일하게 동작)
    // cout << static_cast<int>(ch) << endl;
}