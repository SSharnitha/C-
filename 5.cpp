#include<iostream>
using namespace std;
int main()
{
    char ch[7]={0,'a','b','c','d','s','t'};
    int a,b,u,v,n,i,j,ne=1,k,min1=9999,h=0;
    int visited[10]={0,0,0,0,0,0,0,0,0,0},min,mincost=0,cost[10][10];
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
       cout<<"ENTER THE VALUE CORRESPONDING TO ADJACANY MATRIX "<<"("<<i<<","<<j<<")";
        cin>>cost[i][j];
        if(cost[i][j]==0)
            cost[i][j]=999;
    }
    cout<<"\nTHE ENTERED MATRIX IS:\n";
     for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
    {
        cout<<"\t"<<cost[i][j];
    } cout<<endl;}
    visited[1]=1;
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
        {for(j=1;j<=n;j++)
                {if(cost[i][j]<min)
                    {
                            if(visited[i]!=0)
                            {min=cost[i][j];
                            a=u=i;
                            b=v=j;
                            if(visited[h]!=0)
                            {
                                for(k=1;k<=n;k++)
                                if(cost[h][k]<min)
                                {
                                    min=cost[h][k];
                                    a=u=h;
                                    b=v=k;
                                }
                            }
                            }

                        }}

                if(visited[v]==0)

                 {
                     cout<<"\n"<<ne++<<"\t"<<ch[a]<<"\t"<<ch[b]<<"\t"<<min;
                    visited[v]=1;h=v;
                 }

                cost[a][b]=cost[b][a]=999;}}}
