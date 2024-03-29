#include<iostream>

using namespace std;
#define INFINITY 999

class Graph
{
private:
int adjMatrix[15][15];
int predecessor[15],distance[15];
bool mark[15];
int source;
int numOfVertices;

public:
void read();
void initialize();
int getClosestUnmarkedNode();
void dijkstra();
void output();
void printPath(int);
};
void Graph::read()
{
    cout<<"Enter the number of vertices of the graph(should be > 0)";
    cin>>numOfVertices;
    while(numOfVertices <= 0)
        {
cout<<"Enter the number of vertices of the graph(should be > 0)\n";
cin>>numOfVertices;
}

cout<<"Enter the adjacency matrix for the graph";
cout<<�To enter infinity enter �<<INFINITY<<endl;
for(int i=0;i<numOfVertices;i++) {
cout<<�Enter the (+ve)weights for the row �<<i<<endl;
for(int j=0;j<numOfVertices;j++) {
cin>>adjMatrix[i][j];
while(adjMatrix[i][j]<0) {
cout<<�Weights should be +ve. Enter the weight again\n�;
cin>>adjMatrix[i][j];
}
}
}
//read the source node from which the shortest paths to other nodes has to be found
cout<<�Enter the source vertex\n�;
cin>>source;
while((source<0) && (source>numOfVertices-1)) {
cout<<�Source vertex should be between 0 and �<<numOfVertices-1<<endl;
cout<<�Enter the source vertex again\n�;
cin>>source;
}
}
void Graph::initialize()
{
for(int i=0;i<numOfVertices;i++) {
mark[i] = false;
predecessor[i] = -1;
distance[i] = INFINITY;
}
distance
[/source]
= 0;
}
int Graph::getClosestUnmarkedNode()
{
int minDistance = INFINITY;
int closestUnmarkedNode;
for(int i=0;i<numOfVertices;i++) {
if((!mark[i]) && ( minDistance >= distance[i])) {
minDistance = distance[i];
closestUnmarkedNode = i;
}
}
return closestUnmarkedNode;
}
void Graph::dijkstra()
{
initialize();
int minDistance = INFINITY;
int closestUnmarkedNode;
int count = 0;
while(count < numOfVertices) {
closestUnmarkedNode = getClosestUnmarkedNode();
mark[CUN] = true;
for(int i=0;i<numOfVertices;i++) {
if((!mark[i]) && (adjMatrix[cun][i]>0) ) {
if(distance[i] > distance[cun]+adjMatrix[cun][i]) {
distance[i] = distance[cun]+adjMatrix[cun][i];
predecessor[i] = closestUnmarkedNode;
}
}
}
count++;
}
}
void Graph::printPath(int node)
{
if(node == source)
cout<<node<<�..�;
else if(predecessor[node] == -1)
cout<<�No path from �<<source<<�to �<<node<<endl;
else {
printPath(predecessor[node]);
cout<<node<<�..�;
}
}
void Graph::output()
{
for(int i=0;i<numOfVertices;i++) {
if(i == source)
cout<<source<<�..�<<source;
else
printPath(i);
cout<<�->�<<distance[i]<<endl;
}
}
int main()
{
Graph G;
G.read();
G.dijkstra();
G.output();
return 0;
}
