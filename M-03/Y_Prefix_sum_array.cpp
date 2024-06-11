#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n>> q;
    vector <int> v(n);
    for (int i = 0; i<n; i++)
    {
        cin >>v[i];
    }

    vector <long long int> prefix_sum(n);
    prefix_sum[0]=v[0];
    for (int i =1; i<n; i++)
    {
        prefix_sum[i]= v[i]+prefix_sum[i-1];
    }

    // for(int b:prefix_sum)
    // {
    //     cout << b << " ";
    // }
    // cout <<endl;

    while(q--)
    {
        int l,r;
        cin >>l>>r;
        l--;
        r--;
        // cout <<l << " "<< r <<endl ;
        long long int sum ;
        if (l==0)
        {
            sum = prefix_sum[r];
        }
        else
        {
            sum = prefix_sum[r]- prefix_sum[l-1];
        }
        cout << sum<<endl;
    }

    return 0;
}