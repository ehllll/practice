#include <iostream> 
#include <ctime>
#include <string>

using namespace std;

int main()
{
    char str[] = "abc";
    char str1[] = "abc";

    if (strcmp(str, str1) == 0)
        cout << "같음" << endl;

    string str2 = "abc"; // C++ 스타일
    string str3 = "abc";

    if (str2 == str3)
        cout << "Ok" << endl;

}