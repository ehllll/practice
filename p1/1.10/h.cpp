#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(5); //100으로 초기화하고 싶으면 vector<int> vec(5, 100)

    for (int num : vec)
    {
        cout << num << ' ';
    }
    cout << endl;

    vec.resize(10,2); //5에서 10으로 바꿈 , 6번째부터는 2로 바뀜
    for (int num : vec)
    {
        cout << num << ' ';
    }
    cout << endl;

    cout << vec.size() << endl;
    vec.push_back(100); // 1 늘어남 -> 11
    cout << vec.size() << endl;

    for (int num : vec)
    {
        cout << num << ' ';
    }
    cout << endl;

    vec.pop_back(); // 1 줄어듬 -> 10
    cout << vec.size() << endl;
}