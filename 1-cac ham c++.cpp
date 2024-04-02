#include<bits/stdc++.h>


// * xau 
int main(){
	string s;
	- getline(cin, s);//nhap xau s;
	- s.size() // so luong pt trong s
	- s.substr(i,n);//cat tu phan tu i den i+n(neu k co n thi cat toi het xau)
	- stoi(s);//(int)chuyen tu chuoi sang so nguyen(voi xau lien hoac kis tu)
	+) stoll (s);//(long long)
	+) stoi(s.c_str())// chuyen 1 xau roi thanh cac so nguyen
	+) to_string(s)// chuyen so nguyen sang 1 chuoi lien hoac ki tu
	- stringstream ss(s); // dung de tach tu trong 1 xau s;
		vd:
		string token;
		+) while(ss >> token) // gan ss cho token dung cho dau cach	
		+) while(getline(ss,token,','))	//dung cho dau phay
		
}
//*vector: dung de tao mot mang dong co the tu xoa
int main(){
	vector<string> v;
	stringstream ss(s);
	vector<tring> v;
	v.push_back(ss); //nhap ss vo cuoi v;
	
}
//*ham pair && tuple
int main(){
	- pair<datatype1,datatype2> v;
		vd: pair(int, int) v =make_pair(100,100) || = {100,100};
		v.first;//phan tu dau
		v.second;//phan tu thu 2
	- tuple<date1,2,3> v(1,2,3);//ta cung co the dat nhu pair
	 +) in ra : cout << get<2>(t)//in ra pt thu 2
}
//*ham set
int main(){
	set<int> t;//chu y set se luu cac gia tri tu nho toi lon
	- t.insert(i);//them phan tu khac nhau vao trong set.
	- t.count(n);// dem phan tu n trong t
		vd: if(t.count(5) !=0) // tim 5 co nam trong t hay k
		//ngoai ra co the dung find;
		vd: if(t.find(5) != s.end());
	- t.erase(5);//xoa phan tu 5 ra khoi t
	- t.substr(5,6);//cat 1 xau con tu vi tri t5 dai 6 ki tu
	- t.rbegin();//phan tu cuoi trong t;
		vd: *t.rbegin();
	//ngoai cac cach duyet set bang for hay auto ta co the dung
		for(set<int>::iterator it =begin(); it!=end(); it++){
			cout << *it<< " ";
		}
	- multiset<int> t;//nhap phan tu co the giong nhau(dung de tim so luong pt giong)
	- inordered set<int> t;// nhap vào xet luc nay no se k xep thu tu nx
}
//*map-mot mang co thu tu nhung khac set la no luu 1 cap(phu hop voi bai toan tan xuat
int main(){
	- map<datatype1,datatype2> mp; //(key/value)
		vd:// them 1 cap key
			mp[100]=200; //(100,200)
			|| mp.insert({300,400});
			cout << mp.size()//=1(luu cap 1)
	// tuong tu nhu set cac key trong map khong duoc trung nhau	
		for(pair<int,int> x:mp) || for(auto x:mp){
			cout << x.first << " " << x.second<< endl;
		}
	 +)// neu muon xoa mot cap nao do
		mp.erase(key);	
	multimap<int ,int> mp;// co the nhap cac phan tu giong nhau nhung k su dung duoc phep gan nhu set ma phai dung ínetr
	vd: multimap<int,int> mp;
		mp.insert({1,100});	
		mp.insert({2,200});
		mp.insert({1,200});
	//(chu y neu xoa ddi 1 phan tu ta k the dung erase vi key giong nhau maf phai dung interator)
	- inorderred map; //tuong tu nhu set se khong xep theo thu tu tu nho toi lon nx	
}
//*thuat toan tim kiem
int main(){//ap dung cho mang da duoc sap xep
	// tim x trong mang a[n] 
		binary search(a, a+n, x);
		binary search(a+i, a+j, x);// neu muon tim trong doan mang a 
	// tuong tu tim trong vector
		binary search(v.begin(), v.end(); key);
		binary search(v.begin()+x, v.begin()+y, key);//=>v[x]->v[y]
	
	+)//ham	lower_bound()
	lower_bound(iyer1, iter2, key)// tra ve vi tri dau tien cua phan tu =>key;[inter1,inter2)
	vd:	auto it = lower_bound(a, a+n, x);
			cout << *it;//in ra gia tri
			cout << it-a;// in ra vi tri cua phan tu do trong mang a
		//chu y: tat ca cac phan tu trong a nho hon x thi ham tra ve vi tri cuoi cung
	+)//ham upper_bound(): tra ve vi tri dau tien cua phan tu >key
	upper(inter1, inter2, key);
		Vd: // tuong tu nhu lower
}
// ham sap xep
int main(){
	+) mang
		sort(a, a+n);//sap xep mang a theo thu tu tu nho toi lon
		sort(a, a+n, greater<int>());// sap xep tu lon ve nho;
		sort(a, a+n, cmp);// sap xep mang a theo dieu kien cmp(ham cmp tra ve 2 gia trij T or F)
	+) pair
		// sap xep theo key
	//ngoai ra t co stable_sort()
}
int main(){
	isdigit(x);//kiem tra xem ki tu do co phai laf mot chu so hay khong
}
int main(){// motj so ham hoan vi dung cho thuat toan sinh
	next_permutation(a+1,a+n+1);
	next_permutation(a+1, a+n+1, greater<int>())
}
	
