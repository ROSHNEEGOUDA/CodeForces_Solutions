#include <bits/stdc++.h>
using namespace std;

void bround()
{
    long long n, k;
    cin >> n >> k;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long count = 1;
    sort(a, a + n);
    long long ans = 1;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] - a[i - 1])> k)
        {
            count=1;
        }
        else
        {
            count++;
        }
        ans = max(count, ans);
    }
    cout << n - ans;
}

int main()
{
    int t;
    cin >> t;
    for(int x=0;x<t;x++)
    {
        bround();
        cout << endl;
    }

    return 0;
}
