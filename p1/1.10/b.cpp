#include <iostream>

using namespace std;

union Union
{
    int i;
    float f;
    double d;
};

int main()
{
    Union u;
    int *ip = (int *)&u;
    float *fp = (float *)&u;
    double *dp = (double *)&u;

    u.i = 1; // 포인터를 쓸 때는 데이터타입도 알맞게 지정해줘야한다

    cout << u.i << endl;
    cout << *ip << endl;

    cout << u.f << endl;
    cout << *fp << endl;

    cout << u.d << endl;
    cout << *dp << endl;
}