
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long n, q;
    cin >> n >> q;
    vector<long long> p(n), s(n + 1);
    for (auto & x : p) cin >> x;
    sort(p.begin(), p.end());
    for (int i = 0; i < n; ++i)
    {
        s[i + 1] = s[i] + p[i];
    }
    while (q--) 
    {
        long long x, y;
        cin >> x >> y;
        cout << s[n - x + y] - s[n - x] <<endl;
    }
}