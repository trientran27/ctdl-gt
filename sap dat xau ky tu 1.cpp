#include<bits/stdc++.h>
using namespace std;
//y tuong tim phan tu co tan suat xuat hien nhieu nhat(k) sao cho k-(n-k)<=1
void solve(){
	string s;
	cin >>s;
	int a[26]={0};
	for(char x:s){
		a[x-'a']++;//dem tan suat xuat hien cua cac ki tu trong s
	}
	int k= *max_element(a, a+26);//tim tan suat cua phan tu xuat hien nhieu nhat
	if( (s.length()-k) >= k-1 ){
		cout <<1;
	}else cout <<-1;
	cout <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		solve();
	}
}

