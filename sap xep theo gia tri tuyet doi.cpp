#include<bits/stdc++.h>
using namespace std;

int x;
bool sapxep(int a, int b){
	return abs(a-x)<abs(b-x);
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n >>x;
		int a[n+5];
		for(int i=0; i<n; i++){
			cin >>a[i];
		}
		stable_sort(a, a+n, sapxep);
		for(int i=0; i<n; i++){
			cout <<a[i] <<" ";
		}
		cout <<endl;
	}
}




