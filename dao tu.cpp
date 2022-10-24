#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string word;
		stack<string> st;
		while(ss >> word){
			st.push(word);
		}
		while(1){
			cout<<st.top()<<" ";
			st.pop();
			if(st.empty()) break;
		}
		cout<<endl;
	}
}

