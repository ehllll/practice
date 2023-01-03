#include <iostream>

using namespace std;

int main()
{
    struct Grade
    {
        string web;
    };
   
    struct Person // 구조체는 데이터타입 섞여도됌, 배열은 안됌
    {
        string name;
        int grade;
        Grade test;
    };
    Person person;
    person.name = "Lee";
    person.grade = 3;
    person.test.web = "JS";

    cout << person.name << endl;
    cout << person.grade << endl;
    cout << person.test.web << endl;
}