#include<bits/stdc++.h>
using namespace std;
bitset<1005> vs;
vector<int> a[1005];
int xuly(int v)
{
	int d=0;
	for(int i=1;i<=v;i++)
	{
		if(a[i].size()&1) d++;
	}
	if(d==0) return 2;
	if(d<=2) return 1;
	return 0;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int v,e,x,y;
		cin >> v >> e;
		for(int i=1;i<=v;i++){
			vs[i]=0;
			a[i].clear();
		}
		while(e--)
		{
			cin >> x >> y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		cout << xuly(v) << endl;
	}
}


