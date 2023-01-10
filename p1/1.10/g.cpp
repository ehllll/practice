#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int *p = &num;
    cout << *p << endl;
    void *vp = p;
    int *p0 = (int *)vp;
    cout << *p0 << endl;

    int *P = (int *)malloc(sizeof(int) * 3); // 어떤형태로 malloc을 선언할지 알려줌[malloc앞에 int *]
    
}