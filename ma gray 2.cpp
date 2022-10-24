#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		int kt=0;
		for(int i=0; i<s.size(); i++){
			if(i==0) {
				cout <<s[i];
				kt=s[i]-48;
			}
			else{
				if(s[i]-48==0){
					cout <<kt;
				}else{
					if(kt==0){
						cout <<1;
						kt=1;
					}else{
						cout <<0;
						kt=0;
					}
				}
			}
		}
		cout <<endl;
	}
}
//y tuong cung tuong tu nhu ma gray 1 : s[i] gray= (s[i]+s[i-1]) nhi phan tuong ung

