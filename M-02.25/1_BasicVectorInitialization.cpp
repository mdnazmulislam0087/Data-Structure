#include <bits\stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for (int i =1; i<=n; i++)
    {
        // int x =i;
        v.push_back(i);
    }

    for (int c:v)
    {
        cout <<c << " ";
    }
    return 0;
}