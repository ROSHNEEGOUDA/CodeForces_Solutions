#include<iostream>
using namespace std;
void solve() {
	for (int r = 0; r < 8; r++) 
    {
		for (int c = 0; c < 8; c++) 
        {
			char x;
			cin >> x;
			if (x != '.') 
            {
                cout << x;
            }
		}
	}	
	cout <<endl;
}
 
int main() 
{
	int t; cin >> t; 
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
	
}
