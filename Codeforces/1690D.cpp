// Problem: D. Black and White Stripe
// Contest: Codeforces - Codeforces Round 797 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1690/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ld long double
#define ff first
#define ss second
#define pb push_back
const unsigned int m = 1e9 + 7;
 
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll m) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % m; a = (a * a) % m; b = b >> 1;} return res%m ;}
int nCr(int n , int r){
if (n < r) return 0;
if (r > n - r) r = n - r;
ll ans = 1; ll i;
for (i = 1; i <= r; i++){ans = (ans*(n - r + i));ans /= i;} return ans;}
ll modinv(ll a , ll m ) {return expo(a , m-2 , m)%m;} // m is prime 
 
 
 
void solve(){
	
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<int> a(n,0);
	if(s[0]=='W')a[0]=1;;
	for(int i=1;i<n;i++){
		if(s[i]=='W'){
			a[i]=a[i-1]+1;
			continue;
		}
		a[i]=a[i-1];
	}
	int ans = INT_MAX;
	for(int i=0;i<n;i++){
		int ind = i + k-1;
		if(ind>=n)break;
		int val;
		if(i==0)val=0;
		else val=a[i-1];
		ans=min(ans,max(0ll,a[ind]-val));
	}
	cout<<ans<<endl;
	return;
	
		
}
 
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
	}
