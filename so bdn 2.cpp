#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		queue<long long> qe;
		long long n;
		cin >>n;
		long long x=1;
		qe.push(1);
		while(1){
			x=qe.front();
			if(x%n==0){
				cout <<x;
				break;
			}else{
				qe.pop();
				qe.push(x*10);
				qe.push(x*10+1);
			}
		}
		cout <<endl;
	}
}

