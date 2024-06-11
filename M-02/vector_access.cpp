#include <bits\stdc++.h>

using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6};

    v[1] = 10;

    cout << v[2] << endl; // 3

    cout<< v[0] <<endl;//1
    cout << v.front() << endl; // 1

    cout << v[v.size()-1] <<endl; //6
    cout << v.back() << endl; // 6

    return 0;
}