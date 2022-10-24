#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod= 1e9+7;
int main(){
	int t;
	cin >>t;
	while(t--){
		ll n;
		cin >>n;
		ll a[n];
		priority_queue<ll, vector<ll>, greater<ll>> st;//khi push 1 phan tu nao no se sap xep
		for(int i=0; i<n; i++){
			cin >>a[i];
			st.push(a[i]%mod);//ngan xep se duoc xep tu nho to lon
		}
		long long sum=0;
		while(st.size()>1){//con it nhat 2 phan tu
			ll x=st.top();
			st.pop();//xuat ra
			ll y=st.top();
			st.pop();//xuat ra
			st.push((x+y)%mod);//nhap x+y vap stack
			sum+=(x+y)%mod;
			sum %= mod;
			//cout <<x+y <<" ";
		}
		cout <<sum <<endl;
	}
}
