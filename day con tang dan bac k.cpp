#include<bits/stdc++.h>
using namespace std;

int n, k, dem=0;
int c[100];
int a[100];
vector <int> v;
void in(){
	v.clear();
	for(int i=1; i<=k; i++){
		v.push_back(a[c[i]]);
	}
	int kt=0;
	for(int i=0; i<v.size()-1; i++){
		if(v[i] >=v[i+1]){
			kt=1;
			break;
		}
 	}
 	if(kt==0) dem++;
}
void sinh(int i){
	for(int j=c[i-1]+1; j<=n-k+i; j++){
		c[i]=j;
		if(i==k){
			in();
		}else{
			sinh(i+1);
		}
	}
}
int main(){
	cin >>n >>k;
	for(int i=1; i<=n; i++){
		cin >>a[i];
	}
	sinh(1);
	cout <<dem;
}

