#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n ; i++) //O(N)
    {
        cin >> a[i];
    }

    int s=0;
    for (int i = 0; i<n; i+=2) //still same it goes into loop to chek(N/2 times which counted as same);O(N)
    {
        if (i%2==0)
        {
            s+=a[i];
        }
    }
    cout << s<<endl;

    //the complexity is O(N)
    // oporer tao N, nicher tao N; maximum (N);

    return 0;
}