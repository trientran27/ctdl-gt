#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
	for(int i=0; i<n; i++){
		cin >>a[i];
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n, m, k;
		cin >>n >>m >>k;
		int a[n], b[m], c[k];
		nhap(a, n);
		nhap(b, m);
		nhap(c, k);
		int i=0, j=0, l=0;
		vector<int> v;
		while(i<n && j<m && l<k){
			if(a[i]==b[j] && b[j]==c[l]){
				v.push_back(a[i]);
				i++, j++, l++;
			}
			else if(a[i]<=b[j] && a[i]<=c[l]) i++;
			else if(b[j]<=a[i] && b[j]<=c[l]) j++;
			else l++;
		}
		if(v.size()==0) cout <<"NO";
		else{
			for(int x:v){
				cout <<x <<" ";
			}
		}
		cout <<endl;
	}
}

