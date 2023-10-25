// Problem: B. Array Reodering
// Contest: Codeforces - Educational Codeforces Round 110 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1535/B
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
	vector<pair<int,bool>> arr(n);
	int count=0;
	for(int i=0;i<n;i++){
		cin>>arr[i].first;
		
	}
	for(int i=0;i<n;i++){
		if(!(arr[i].first&1)){
			arr[i].second=true;
			count++;
		}
		
	}
	int sum = 0;
	int i=0;
	while(count--){
		sum += (n-1-i);
		i++;
	}
	// cout<<sum<<endl;
	for(int i=0;i<n-1;i++){
		if(arr[i].second){
			continue;
		}
		for(int j=i+1;j<n;j++){
			if(arr[j].second){
				continue;
			}
			if(gcd(arr[i].first,arr[j].first)>1){
				sum++;
			}
		}
	}
	cout<<sum<<endl;
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
	
			
