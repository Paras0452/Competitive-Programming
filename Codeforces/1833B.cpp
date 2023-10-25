// Problem: B. Restore the Weather
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1833/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7


void solve(){
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i].first;
		arr[i].second = i;
	}
	vector<int> brr(n);
	for(int i=0;i<n;i++){
		cin>>brr[i];
	}
	sort(arr.begin(),arr.end());
	sort(brr.begin(),brr.end());
	vector<int> ans(n);
	for(int i=0;i<n;i++){
		ans[arr[i].second] = brr[i];
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
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
	
			
