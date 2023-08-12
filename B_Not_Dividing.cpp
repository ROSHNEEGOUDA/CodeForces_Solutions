#include <bits/stdc++.h>
#include<vector>
using namespace std;
 
int main()
{
	
	long long t; cin >> t;
	for(int tn = 0; tn < t; tn++)
	{
		long long n; cin >> n;
		vector <int> a(n);
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(int i = 0; i < n; i++)
		{
			if(a[i] == 1)
			{
				a[i]++;
			}
		}
		for(int i = 1; i < n; i++)
		{
		    
			if(a[i] % a[i - 1] == 0)
			{
				a[i]++;
			}
		}
		for(int i=0;i<n;i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}