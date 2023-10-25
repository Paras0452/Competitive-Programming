// Problem: B. Permutation Sort
// Contest: Codeforces - Educational Codeforces Round 109 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1525/B
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
	vector<int> arr(n),brr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
		brr[i] = arr[i];
	}
	sort(arr.begin(),arr.end());
	bool flag = true;
	for(int i=0;i<n;i++){
		if(arr[i]!=brr[i]){
			flag = false;
			break;
		}
	}
	if(flag){
		cout<<0<<endl;
		return;
	}
	if((brr[0]==arr[n-1] && brr[n-1]==arr[0])){
		cout<<3<<endl;
		return;
	}
	
	if((brr[0]==arr[0] || brr[n-1]==arr[n-1])){
		cout<<1<<endl;
		return;
	}
	cout<<2<<endl;
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
	
			
