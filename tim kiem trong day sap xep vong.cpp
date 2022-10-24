#include<iostream>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[10000];
		int d =0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]==x) d = i;
		}
		cout<<d+1;
		cout<<endl;
	}
}

