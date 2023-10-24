// Problem: A. Lineland Mail
// Contest: Codeforces - Codeforces Round #Pi (Div. 2)
// URL: https://codeforces.com/problemset/problem/567/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7


void solve(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int> min_arr(n);
	vector<int> max_arr(n);
	for(int i=0;i<n;i++){
		if(i==0){
			min_arr[0] = abs(arr[0]-arr[1]);
			continue;
		}
		if(i==n-1){
			min_arr[n-1]=abs(arr[n-1]-arr[n-2]);
		continue;
		}
		min_arr[i] = min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
	}	
	for(int i=0;i<n;i++){
		if(i==0){
			max_arr[0] = abs(arr[0]-arr[n-1]);
			continue;
		}
		if(i==n-1){
			max_arr[n-1]=abs(arr[n-1]-arr[0]);
		continue;
		}
		max_arr[i] = max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
	}
	for(int i=0;i<n;i++){
		cout<<min_arr[i]<<" "<<max_arr[i]<<endl;
	}
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
	
			
