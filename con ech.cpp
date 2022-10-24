#include<bits/stdc++.h>
using namespace std;
//ban chat la fibo 3 so
int main(){
	int t;
	cin >>t;
	long long G[51];
	G[0]=1, G[1]=1, G[2]=2;
	for(int i=3; i<=50; i++){
		G[i]=G[i-1]+G[i-2]+G[i-3];
	}
	while(t--){
		int n;
		cin >>n;
		cout <<G[n] <<endl;
	}
}

