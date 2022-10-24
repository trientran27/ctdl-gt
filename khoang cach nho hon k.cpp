#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		long long n, k;
		cin >>n >>k;
		long long a[n];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		sort(a, a+n);
		long long ans=0;
		for(int i=0; i<n; i++){
			int x=a[i]+k;
			auto it= lower_bound(a, a+n, x);
			int res= (it-a)-1-i;//it-a la vi tri phan tu lon hon hoac bang x
			if(res>0) ans+=res;
		}
		cout <<ans <<endl;
	}
}

