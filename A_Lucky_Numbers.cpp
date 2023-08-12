#include<bits/stdc++.h>
using namespace std;
int luck(int n)
{
    vector<int> v;

    string s = to_string(n);

    for(int i=0; i<s.size(); i++)
    {
        v.push_back(s[i] );
    }

    int mx = *max_element(v.begin(), v.end());
    int mini = *min_element(v.begin(), v.end());

    return mx - mini;
}

void solve()
{
    int l, r;
    cin>>l>>r;

    int ans = 0;
    int lucky = 0;
    int maxx = 0;

    for(int i=l; i<=r; i++){
        int lucky = luck(i);
       if(lucky >= maxx){
            maxx = lucky;
            ans = i;
        }

        if(maxx == 9){
            break;
        }
    }
    cout<<ans<<endl;
}
int main()
{
   int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
