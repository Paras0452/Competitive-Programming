// Problem: B. Promo
// Contest: Codeforces - Educational Codeforces Round 130 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1697/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7


void solve(){
	
	int n,q;
	cin>>n>>q;
	vector<int> arr(n+1);
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	vector<int> prefix(n+1,0);

	for(int i=1;i<=n;i++){
		prefix[i] = prefix[i-1] + arr[i];
	}
	
	while(q--){
		int x,y;
		cin>>x>>y;
		int sum = prefix[n-x+y] - prefix[n-x];
		cout<<sum<<endl;
	}
	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}
	return 0;
	}
	
			
