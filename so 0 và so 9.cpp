#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		queue<long long> qe;
		long long n;
		cin >>n;
		long long x=9;
		qe.push(x);
		while(1){
			x=qe.front();
			if(x%n==0){
				cout <<x;
				break;
			}else{
				qe.pop();
				qe.push(x*10);
				qe.push(x*10+9);
			}
		}
		cout <<endl;
	}
}

