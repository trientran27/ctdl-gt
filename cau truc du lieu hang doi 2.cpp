#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	queue<int> qe;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string a[3], tmp;
		int i=0;
		while(ss >> tmp){
			a[i++]=tmp;
		}
		if(i>1){
			int number=stoi(a[1]);
			qe.push(number);
		}else if(a[0]=="PRINTFRONT"){
			if(qe.empty()==1){
				cout <<"NONE" <<endl;
			}else{
				cout <<qe.front() <<endl;
			}
		}else if(a[0]=="POP"){
			if(!qe.empty()){
				qe.pop();
			}
		}
	}
}
