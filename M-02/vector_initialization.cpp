#include<bits\stdc++.h>

using namespace std;

int main()
{
    //type 1
    // vector<int> v;

    //type-2
    // vector <int> v(5);

    // type-3
    // vector <int> v(5, 10);

    // type-4
    // vector <int> v2(5,100);
    // vector <int> v(v2);

    //type-05
    // int a[6]= {1,2,3,4,5,6};
    // vector<int> v (a,a+6);

    // extra rype
    vector <int> v = {1,2,3,4};


    for(int i=0; i<v.size(); i++)
    {
        cout << v[i]<<" ";
    }
    cout << endl;


    cout<< v.size()<<endl;

    return 0;
}