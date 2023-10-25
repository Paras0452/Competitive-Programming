// Problem: B. Food Buying
// Contest: Codeforces - Codeforces Round 617 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1296/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7


void solve(){
	int s;
	cin>>s;
	int a,b;
	if(s<10){
		cout<<s<<endl;
		return;
	}
	if(s%9==0){
		a = (s/9)-1;
		b = 9;
	}else{
      a = s/9;
      b = s%9;
      } 
     cout<<(10*a)+b<<endl;
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
	
			
