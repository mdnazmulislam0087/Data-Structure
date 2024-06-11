#include<bits\stdc++.h>

using namespace std;

int main()
{

    vector <int> x= {10,20,30};
    vector <int> t= {10,20,30, 40, 67};
    vector <int> v= {1,2,3};
    // v=x ; //O(1)
    v = t; // )(N)
    for (int i =0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }



    return 0;

}