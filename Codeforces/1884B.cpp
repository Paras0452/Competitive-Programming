// Problem: B. Haunted House
// Contest: Codeforces - Codeforces Round 904 (Div. 2)
// URL: https://codeforces.com/contest/1884/problem/B
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
	string s;
	cin>>s;
	set<int> pos;
	for(int i=0;i<n;i++){
		if(s[i]=='0')pos.insert(i);
	}
	int ans = 0;
	for(int i=n-1;i>=0;i--){
		if(s[i]=='1'){
		if(ans==-1 || pos.size()==0){
			ans = -1;
		}else{
			ans += i - *pos.rbegin();
			s[*pos.rbegin()] = '1';
			pos.erase(--pos.end());
		}
		
		}else{
			pos.erase(i);
		}
		cout<<ans<<" ";
	}
	cout<<endl;
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
	
			
