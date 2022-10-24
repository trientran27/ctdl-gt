#include<bits/stdc++.h>
using namespace std;

long long n, s, ans;
long long a[30], x[30];
bool ok;

void cong(int k){
	long long sum=0;
	for(int i=1; i<=k; i++){
		sum+=a[x[i]];
	}
	if(sum==s){
		ans=k;
		ok=false;
	}
}
void Try( int i, int k){
	for(int j=x[i-1]+1; j<=n-k+i; j++){
		if(ok) x[i]=j;
		if(i==k) cong(k);
		else Try(i+1, k);
	}
}
int main(){
	cin >>n >>s;
	for(int i=1; i<=n; i++){// nhap gia tri
		cin>>a[i];
	}
	ans=-1;
	ok=true;
	for(int i=1; i<=n; i++){
		if(ok){
			Try(1,i);
		}
	}
	cout <<ans;
}
// y tuong xet to hop tu 1 toi n cua mang a
