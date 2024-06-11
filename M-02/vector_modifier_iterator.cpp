#include <bits\stdc++.h>

using namespace std;

int main()
{
    // Method-1
    vector <int> v = { 1, 2 ,3 ,4 ,5 ,6 };
    vector <int> ::iterator it;
    it = v.begin();
    cout << *it <<endl;

    // Method-2
    vector <int> v2= {100,200,300,400};
    auto itn = v2.begin();
    cout << *itn<<endl;

    // Method-3
    vector <int> v3= {100,200,300,400};
    for(auto itr= v3.begin(); itr<v3.end(); itr++)
    {
        cout << *itr <<" ";
    }

    return 0;
}