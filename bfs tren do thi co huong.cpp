#include<bits/stdc++.h>
using namespace std;
bitset<1005> vi;
vector<int> a[1005];
void Bfs(int u)
{
	queue<int> q;
	q.push(u);
	while(q.size())
	{
		u=q.front();
		q.pop();
		cout << u << " ";
		vi[u]=1;
		for(int i:a[u]){
			if(vi[i]==0){
				vi[i]=1;
				q.push(i);
			}
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int v,e,u,x,y;
		cin >> v >> e >> u;
		for(int i=1;i<=v;i++){
			vi[i]=0;
			a[i].clear();
		}
		while(e--)
		{
			cin >> x >> y;
			a[x].push_back(y);
		}
		Bfs(u);
		cout << endl;
	}
}

