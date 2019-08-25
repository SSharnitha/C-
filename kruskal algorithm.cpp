#include<iostream>
using namespace std;

int a,b,i,j,u,v,n=4,ne=1;
int mincost=0,parent[9],cost[9][9];

int find(int i)
{
    while(parent[i])
        i=parent[i];
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}

int main()
{
    int min;
    cout<<"\nImplementing Kruskals algorithm:";
    cout<<"\nEnter the adjestency matrix:";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>cost[i][j];
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    }
    cout<<"\n The path for tha cable is:";

    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            cout<<ne++<<"edge("<<a<<","<<b<<")="<<min<<"\n";
            mincost+=min;
        }
        cost[a][b]=cost[b][a]=999;
    }
    cout<<"\nMincost is:"<<mincost;

    return 0;
}
