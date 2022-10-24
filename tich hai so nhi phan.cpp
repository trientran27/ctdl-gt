#include<bits/stdc++.h>
using namespace std;

long long convert(string a){
	int dem=0;
	long long ans=0;
	for(int i=a.size()-1; i>=0; i--){
		ans += int(a[i]-'0')*pow(2, dem);
		dem++;
	}
	return ans;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		string a, b;
		cin >>a >>b;
		cout << convert(a)*convert(b) <<endl;
	}
}

