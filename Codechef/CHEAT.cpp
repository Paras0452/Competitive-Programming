// Problem: Dracula Eats
// Contest: CodeChef - START105D
// URL: https://www.codechef.com/START105D/problems/CHEAT
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7


void solve(){
	int n;
	cin>>n;
	if(n==1){
		cout<<0<<endl;
		return;
	}
	if(n>1 && n<7){
		cout<<1<<endl;
		return;
	}
	int a = n/7;
	int b = n%7;
	if(b>=2){
		cout<<a+1<<endl;
		return;
	}
	cout<<a<<endl;
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
	
			
