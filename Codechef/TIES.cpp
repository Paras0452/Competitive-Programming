#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7


void solve(){
	int n;
	cin>>n;
	vector<int> arr(n);
	int sum = 0;
	set<int> s;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		s.insert(arr[i]);
		sum += arr[i];
	}
	if(n==1 || s.size()==1){
		cout<<"Yes"<<endl;
		return;
	}
	int a = sum/n;
	bool flag = true;
	if(a*n==sum){
		for(int i=0;i<n;i++){
			if(abs(arr[i]-a)%2){
				flag = false;
			break;
			}
			
		}
		if(flag){
			cout<<"Yes"<<endl;
			return;
		}
	}
	cout<<"No"<<endl;
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
	
			
