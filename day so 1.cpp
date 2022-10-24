#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		cout <<"[";
		for(int i=0; i<n; i++){
			cout <<a[i];
			if(i!=n-1) cout <<" ";
		}
		cout <<"]" <<endl;;
		int k=1;
		while(n-k>0){
			cout <<"[";
			for(int i=0; i<n-k; i++){
				a[i]=a[i]+a[i+1];
				cout <<a[i];
				if(i!=n-k-1) cout <<" ";//khong phai phan tu cuoi
			}
			cout <<"]"<<endl;
			k++;
		}
	}
}

