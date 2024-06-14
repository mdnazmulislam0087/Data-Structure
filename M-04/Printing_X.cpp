#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 0;
    int sp = n-2;
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << " ";
        }
        s++;

        cout << "\\";
        
        for (int j = 0; j < sp; j++)
        {
            cout << " ";
        }
        sp-=2;
        cout << "/";
        cout <<endl;

    }
    

    
    for (int i = 0 ; i<=0;i++)
    {
        for (int j=0; j<n/2;j++)
        {
            cout <<" ";
        }
        cout <<"X"<<endl;

    }


    int b,c;
    b= (n/2)-1;
    c=1;
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << " ";
        }
        b--;

        cout << "/";
        
        for (int j = 0; j < c; j++)
        {
            cout << " ";
        }
        c+=2;
        cout << "\\";
        cout <<endl;

    }




    return 0;
}