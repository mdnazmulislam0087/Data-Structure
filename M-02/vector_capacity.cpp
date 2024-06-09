#include<bits\stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    // cout <<v.max_size()<< endl;

    // cout <<v.capacity()<< endl;
    v.push_back(10);
    // cout <<v.capacity()<< endl;
    v.push_back(60);
    // cout <<v.capacity()<< endl;
    v.push_back(70);
    // cout <<v.capacity()<< endl;
    v.push_back(80);
    // cout <<v.capacity()<< endl;
    v.push_back(90);
    // cout <<v.capacity()<< endl;
    // capacity doubles, if it overs;

    v.resize(2);
    v.resize(7,100);

    // v.clear(); // size zzero kore dei but value delete kore na

    cout <<v.size()<<endl;

  

    for(int i =0;i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // cout <<v[4];

    //clear;





    return 0;
}