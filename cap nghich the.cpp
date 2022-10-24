#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//tron 2 day con: day 1[l,m], day 2 [m+1, r]
ll merge(ll a[], int l, int m, int r){
	vector<int> x(a+l, a+m+1);
	vector<int> y(a+m+1, a+r+1);
	int i=0, j=0;
	ll cnt=0;
	while( i<x.size() && j<y.size() ){
		if(x[i] <= y[j]){
			a[l] = x[i];
			++l, ++i;
		}else{
			cnt += x.size()-i; 
			a[l] = y[j];
			++l, ++j;
		}
	}
	while(i<x.size()){
		a[l] = x[i];
		++l, ++i;
	}
	while(j<y.size()){
		a[l] = y[j];
		++l, ++j;
	}
	return cnt;
}
//tach 2 day con va dem so cap nghich the
ll mergesort(ll a[], int l, int r){
	ll dem=0;
	if(l<r){
		int m=(l+r)/2;
		dem += mergesort(a, l, m);//so cap nghich the trong mang truoc
		dem += mergesort(a, m+1, r);//so cap nghich the trong mang sau
		dem += merge(a, l, m, r);//so cap nghich the giua 2 mang truoc sau
	}
	return dem;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>> n;
		ll a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout <<mergesort(a, 0, n-1) << endl;
	}
}
