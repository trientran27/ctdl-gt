#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	cin.ignore();
	vector<vector<int>> v;
	for(int i=1; i<=n; i++){
		string s, tmp;
		getline(cin , s);
		stringstream ss(s);
		while(ss >>tmp){
			int k=0;
			for(int j=0; j<tmp.size(); j++){
				k= k*10 + tmp[j]-48;
			}
			if(k>i){
				vector<int> v1;
				v1.push_back(i);
				v1.push_back(k);
				v.push_back(v1);
			}
		}
	}
	for(int i=0; i<v.size(); i++){
		for(int j=0; j<v[i].size(); j++){
			cout <<v[i][j] <<" ";
		}
		cout <<endl;
	}
}

