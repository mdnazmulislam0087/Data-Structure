#include <bits\stdc++.h>

using namespace std;

int main()
{
    int n = 10;
    vector<int> v;
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }

    for (int c : v)
    {
        cout << c << " ";
    }
    cout << endl;
    cout << "The size is " << v.size() << endl;
    cout << "The capacity is " << v.capacity() << endl;
    cout << "The Max size is " << v.max_size() << endl;

    v.resize(20, 0);
    cout << "after resizing" << endl;

    for (int c : v)
    {
        cout << c << " ";
    }
    cout << endl;
    v.clear();
    cout <<"after clearing the size become "<< v.size()<< endl;
    cout << "Checking empty "<<v.empty()<<endl;


    v.resize(n, 100);
    cout <<"The size"<<v.size()<<endl;
    cout <<"The capacity"<<v.capacity()<<endl;

    for (int l:v)
    {
        cout << l << " ";
    }
    return 0;
}