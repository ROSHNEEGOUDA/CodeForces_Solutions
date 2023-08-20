#include <bits/stdc++.h>
 
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
void solve() 
{
    int n,m,k,H; cin >> n >> m >> k >> H;
    int ans = 0;
    forn(i, n) 
    {
        int x; cin >> x;
        ans += (H != x) && abs(H - x) % k == 0 && abs(H-x) <= (m-1) * k;
    }
    cout << ans << endl;
}
int main() 
{
    int t;
    cin >> t;
 
    forn(tt, t) 
    {
        solve();
    }
}
