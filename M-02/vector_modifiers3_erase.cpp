#include<bits\stdc++.h>

using namespace std;

int main()
{

 
    vector <int> v= {1,2,3,4,5,6};
  
    // v.erase(v.begin()+2);
    v.erase(v.begin()+2, v.begin()+4);// last one excluding
    v.erase(v.begin()+2, v.end()-1);// last one excluding


    for (int x:v)
    {

        cout <<x << " ";
    }



    return 0;

}