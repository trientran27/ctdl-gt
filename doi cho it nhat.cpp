#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n+5], b[n+5];
		for(int i=0; i<n; i++){
			cin >>a[i];
			b[i]=a[i];
		}
		sort(b, b+n);
		int dem=0;
		for(int i=0; i<n; i++){
			if(a[i]!=b[i]){
				for(int j=i+1; j<n; j++){
					if(a[j]==b[i]){
						swap(a[i], a[j]);
						dem++;
						break;
					}
				}
			}
		}
		cout <<dem <<endl;
	}
}
