#include<bits/stdc++.h>
using namespace std;

map <long long, bool> d;
int x[20];
long long ans;
vector<int> a;

void Try(int i, int n){
	for(int j=0; j<=1; j++){
		x[i]=j;
		if(i==n-1){
			long long res=0;
			for(int l=0; l<n; l++){
				if(x[l]==1){
					res=10*res+a[l];
				}
			}
			if(d[res]==true && res!=0 && res>ans){
				ans=res;
			}
		}else Try(i+1, n);
	}
}
int main(){
	for(long long i=1; i<=100; i++){
		d[i*i*i]=true;
	}
	int t;
	cin >>t;
	while(t--){
		a.clear();
		long long n;
		cin >>n;
		while(n){
			a.push_back(n%10);
			n/=10;
		}
		reverse(a.begin(), a.end());
		ans=-1;
		Try(0, a.size());
		cout <<ans <<endl;
	}
}
