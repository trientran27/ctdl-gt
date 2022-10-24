#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
	    queue<int> qe;
		int k;
		cin >>k;
		while(k--){
			int n;
			cin >>n;
			if(n==1){
				cout <<qe.size() <<endl;
			}else if(n==2){
				if(qe.empty()){
					cout <<"YES" <<endl;
				}else cout <<"NO" <<endl;
			}else if(n==3){
				int x;
				cin >>x;
				qe.push(x);
			}else if(n==4){
				if(!qe.empty()){
					qe.pop();
				}
			}else if(n==5){
				if(!qe.empty()){
					cout <<qe.front() <<endl;
				}else cout <<-1 <<endl;
			}else if(n==6){
				if(!qe.empty()){
					cout <<qe.back() <<endl;
				}else cout <<-1 <<endl;
			}
		}
	}
}
