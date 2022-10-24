#include<bits/stdc++.h>
using namespace std;

int n;
int a[1005], x[1005];
void khoitao(){
	for(int i=0; i<n; i++){
		a[i]=i+1;
	}
}
void sinh(){
	do{
		for(int i=0; i<n; i++){
			cout <<x[a[i]-1] <<" ";
		}
		cout <<endl;
	}while(next_permutation(a, a+n));
}
int main(){
	cin >>n;
	for(int i=0; i<n; i++){
		cin >>x[i];
	}
	sort(x, x+n);
	khoitao();
	sinh();
}

