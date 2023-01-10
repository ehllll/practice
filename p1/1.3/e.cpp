// c스타일
#include <iostream> 
#include <ctime>

using namespace std;

int main()
{
    char str[] = "abc";
    cout << str << endl;
    string str1;
    // cin >> str1; // cin은 공백전까지만 입력으로 간주함
    getline(cin, str1); // 처음-끝 다 출력
    cout << str1 << endl;
}


