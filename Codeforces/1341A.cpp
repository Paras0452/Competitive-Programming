// Problem: A. Nastya and Rice
// Contest: Codeforces - Codeforces Round 637 (Div. 2) - Thanks, Ivan Belonogov!
// URL: https://codeforces.com/problemset/problem/1341/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7


void solve(){
	int n,a,b,c,d;
	cin>>n>>a>>b>>c>>d;
	int e = (abs(b-a)) * n;
	int f = (a+b) * n;
	if(e<=(c+d) && f>=abs(c-d)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
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
	
			
