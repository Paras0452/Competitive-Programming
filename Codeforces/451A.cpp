// Problem: A. Game With Sticks
// Contest: Codeforces - Codeforces Round 258 (Div. 2)
// URL: https://codeforces.com/problemset/problem/451/A
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
	int count=0;
	while(n>0 && m>0){
		m--;
		n--;
		count++;
	}
	if(count&1){
		cout<<"Akshat"<<endl;
		return;
	}
	cout<<"Malvika"<<endl;
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
	
			
