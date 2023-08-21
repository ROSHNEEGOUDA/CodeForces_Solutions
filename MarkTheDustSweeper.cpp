#include <iostream>
#include <vector>
#define ll long long
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    ll ans = 0;
    int z = 0;
    while(z< n && a[z] == 0)
        z++;
    for(int i = z; i < n-1; ++i)
    {
        ans += a[i];
        if(a[i] == 0) ans++;
    }
    cout << ans << endl;
}
int main()
{
    int t; cin >> t;
    while(t--) solve();
}
