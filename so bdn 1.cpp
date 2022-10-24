#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		long long n;
		cin >>n;
		queue<long long> qe;
		long long x=1, ans=0;
		qe.push(x);
		while(1){
			x=qe.front();
			if(x<=n){
				ans++;
				qe.pop();
				qe.push(x*10);
				qe.push(x*10+1);
			}else{
				break;
			}
		}
		cout <<ans <<endl;
	}
}

