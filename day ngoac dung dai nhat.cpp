#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--){
		string s;
		cin >>s;
		stack<int> st;
		st.push(-1);//phan tu co so
		int ans=0;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='('){
				st.push(i);
			}else{
				st.pop();//xoa ngoac "(" tuong ung
				if(st.size()) ans=max(ans, i-st.top());
				else st.push(i);// truong hop dau co "(" truoc
			}
		}
		cout <<ans <<endl;
	}
}

