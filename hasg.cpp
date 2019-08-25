#include<iostream>
using namespace std;
int u,v,a,b,i,j,n,ne=1;
int parent[10],cost[10][10],mincost=0;
int find(int);
int uni(int,int);
int main()
{
    int min;
    cout<<"Enter the no of vertices:";
    cin>>n;
    cout<<"Enter the cost:";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>cost[i][j];
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    }
    cout<<"The minimum cost is:";
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    min=cost[i][j];
                    u=a=i;
                    v=b=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            mincost=mincost+min;
            cout<<ne++<<"minimum edge("<<a<<","<<b<<")"<<min;
        }
        cost[a][b]=cost[b][a]=999;
    }
    cout<<mincost;
    return 0;
}

int find(int i)
{
    if(parent[i])
        i=parent[i];
    return i;
}
int uni(int u,int v)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
