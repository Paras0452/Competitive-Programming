// Problem: A. Puzzles
// Contest: Codeforces - Codeforces Round 196 (Div. 2)
// URL: https://codeforces.com/problemset/problem/337/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7


void solve(){
	int n,m;
	cin>>n>>m;
	vector<int> arr(m);
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	int ans =INT_MAX;
	for(int i=m-n;i>=0;i--){
		int a = arr[i+n-1]-arr[i];
		ans = min(ans,a);
	}
	cout<<ans<<endl;
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
	
			
