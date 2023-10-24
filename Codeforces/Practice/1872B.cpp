// Problem: B. The Corridor or There and Back Again
// Contest: Codeforces - Codeforces Round 895 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1872/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7


void solve(){
	int n;
	cin>>n;
	int ans = INT_MAX;
	for(int i=0;i<n;i++){
		int d,s;
		cin>>d>>s;
		int b;
		if(s&1){
			b = (s/2);
			b += d;
			ans = min(ans,b);
			continue;
		}else{
			b = (s/2)-1;
			b += d;
			ans = min(ans,b);
		}
	}
	cout<<ans<<endl;
	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
	}
	
			
