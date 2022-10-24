#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[20], x[20];
void Try(int i, int pos){
	for(int j=pos; j<n; j++){
		if(a[j]>x[i-1]){
			x[i]=a[j];
			if(i==k){
				for(int l=1; l<=k; l++){
					cout <<x[l] <<" ";
				}
				cout <<endl;
			}
		}
		Try(i+1, j+1);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>k;
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		sort(a, a+n);
		x[0]=-1;
		Try(1, 0);
	}
}

