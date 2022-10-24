#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int k;
		cin >>k;
		string s;
		cin >>s;
		for(int i=0; i<s.size(); i++){
			if(k==0) break;
			int tmp=i;
			for(int j=i+1; j<s.size(); j++){
				if(s[j] >= s[tmp]) tmp=j;
			}
			if(s[tmp] >s[i]  && tmp>i){
				swap(s[i], s[tmp]);
				k--;
			}
		}
		cout <<s <<endl;
	}
}
//y tuong la duyet phan tu lon nhat dang sau lon nhat

