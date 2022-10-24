#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		stack<long long> st;
		for(int i=s.size()-1; i>=0; i--){
			if(s[i]=='+' || s[i]=='-' ||s[i]=='*' ||s[i]=='/'){
				 long long fi= st.top(); st.pop();
				 long long se= st.top(); st.pop();
				 long long tmp=1e9;
				 if(s[i]=='+'){
				 	tmp= fi+se;
				 }else if(s[i]=='-'){
				 	tmp= fi-se;
				 }else if(s[i]=='*'){
				 	tmp= fi*se;
				 }else if(s[i]=='/'){
				 	tmp= fi/se;
				 }
				 st.push(tmp);
			}else{
				long long number= stoi(string(1,s[i]));
				st.push(number);
			}
		}
		cout <<st.top() <<endl;
	}
}

