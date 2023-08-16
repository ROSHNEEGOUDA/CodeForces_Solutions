#include <bits/stdc++.h>
using namespace std;
void solve() 
{
	int n;
	cin >> n;
	int win =0, score = 0;
	for (int i = 1; i <= n; i++) 
    {
		int a, b;
		cin >> a >> b;
		if (b >score && a <= 10) 
        {win = i;score = b;}
	}
	cout << win << '\n';
}
int main()
{
	int t; cin >> t; 
    for (int i = 1; i <= t; i++) 
    {
        solve();
    }
}
