#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1003][1003],vs[1003][1003];

int BFS()
{
    queue<pair<pair<int,int>, int>> q;
    pair<pair<int,int>,int> u;
    q.push({{1,1}, 0});
    while(q.size())
    {
        u=q.front();
        q.pop();
        int x=u.first.first, y=u.first.second;
        vs[x][y]=1;
        if(x==n && y==m) return u.second;
        if(y+a[x][y] <= m && !vs[x][y+a[x][y]]) q.push({{x,y+a[x][y]}, u.second + 1});
        if(x+a[x][y] <= n && !vs[x+a[x][y]][y]) q.push({{x+a[x][y],y}, u.second + 1});
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin >> a[i][j];
        memset(vs,0,sizeof(vs));
        cout << BFS() << endl;
    }
}
