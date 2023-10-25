// Problem: C. Stripes
// Contest: Codeforces - Codeforces Round 827 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1742/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7


void solve(){
	int r=0;
	bool flag = false;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			char c;
			cin>>c;
			if(c=='R'){
				r++;
			}
		}
		if(r==8){
			flag =true;
		}
		r=0;
	}
	if(flag){
		cout<<"R"<<endl;
		return;
		}
		cout<<"B"<<endl;
	
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
	
			
