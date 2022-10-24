#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	deque<int> qe;
	while(t--){
		string s;
		cin >>s;
		if(s=="PUSHFRONT"){
			int x;
			cin >>x;
			qe.push_front(x);
		}else if(s=="PUSHBACK"){
			int x;
			cin >>x;
			qe.push_back(x);
		}else if(s=="PRINTFRONT"){
			if(!qe.empty()){
				cout <<qe.front() <<endl;
			}else cout <<"NONE" <<endl;
		}else if(s=="PRINTBACK"){
			if(!qe.empty()){
				cout <<qe.back() <<endl;
			}else cout <<"NONE" <<endl;
		}else if(s=="POPFRONT"){
			if(!qe.empty()){
				qe.pop_front();
			}
		}else if(s=="POPBACK"){
			if(!qe.empty()){
				qe.pop_back();
			}
		}
	}
}

