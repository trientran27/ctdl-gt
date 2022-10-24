#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		long long n;
		cin >>n;
		long long a[n], b[n-1];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		long long k=a[n], dem=0;
		for(int i=0; i<n-1; i++){
			cin >>b[i];
			if(a[i]!=b[i] && dem==0){//tim phan tu khac nhau dau tien
				k=i;
				dem++;
			}
		}
		cout <<k+1 <<endl;
	}
}

