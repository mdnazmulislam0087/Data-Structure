#include<bits\stdc++.h>

using namespace std;

int main()
{

 
    vector <int> v= {1,2,3,4,7,6,4,5,4,3,4};
    // replace(v.begin() , v.end() , 4, 100);
    replace(v.begin() , v.end()-1 , 4, 100);
    //Syntax : replace(v.begin() , v.end() , target_value , change_value) 



    for (int x:v)
    {

        cout <<x << " ";
    }



    return 0;

}