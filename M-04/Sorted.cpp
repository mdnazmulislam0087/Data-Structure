#include <bits/stdc++.h>

using namespace std;

int main()
{

    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        sort(a.begin(), a.end());
        int flag =1;
        for (int i = 0; i<n; i++)
        {
            if (a[i] != b[i])
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            cout << "YES" <<endl;
        }
        else 
        {
            cout <<"NO"<<endl;
        }
    }

    return 0;
}
