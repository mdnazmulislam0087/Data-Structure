#include<bits\stdc++.h>

using namespace std;

int main()
{

 
    vector <int> v= {1,2,3,4,5,6};
    vector <int> v2= {100,200};
    // v.insert(v.begin()+2, 10);
    v.insert(v.begin()+2, v2.begin(), v2.end());

    for (int x:v)
    {

        cout <<x << " ";
    }



    return 0;

}