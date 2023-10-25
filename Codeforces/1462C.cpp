// Problem: C. Unique Number
// Contest: Codeforces - Codeforces Round 690 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1462/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9+7


void solve(){
	int x;
	cin>>x;
	if(x<=9){
		cout<<x<<endl;
		return;
	}
	if(x>45){
		cout<<-1<<endl;
		return;
	}
	int i=0;
	int sum=0;
	int digit = 9;

	while(x>0){
		if(digit>x){
			sum += (x*pow(10,i));
			break;
		}else{
		sum += (digit*pow(10,i));
		x-=digit;
		digit--;
		i++;
		
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
	
			
