#include<bits/stdc++.h>
using namespace std;

int a[10];
vector <string> v;
void sinh(int i){
	for(int j=0; j<=2; j+=2){
		a[i]=j;
		if(i==8){
			if(a[1]==0 && a[2]==0) return;//neu k co ngay 00
			if(a[3]==0 && a[4]==0 || a[3]!=0) return;//neu thang 00/2x
			if(a[5]==0) return;//0xxx
			string s="";
			for(int k=1; k<=8; k++){
				s+=(char)(a[k]+'0');
				if(k==2 || k==4){
					s+='/';
				}
			}
			v.push_back(s);
		}else{
			sinh(i+1);
		}
	}
}
int main(){
	sinh(1);
	sort(v.begin(), v.end());
	for(string s:v){
		cout <<s <<endl;
	}
}

