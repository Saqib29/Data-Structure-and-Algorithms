#include <cstdio>
#include <vector>
using namespace std;

#define MAX 100000

vector <int> edges[MAX];
vector <int> cost[MAX];

int main()
{
    int numNodes, numEdges;
    
    scanf("%d %d", &numNodes, &numEdges);
    for(int i=0; i<numEdges; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        
        edges[x].push_back(y);
        edges[y].push_back(x);
        cost[x].push_back(1);
        cost[y].push_back(1);
    }
    
    // getting all connected node of a node
    for(int i=0; i < edges[1].size(); i++){
        printf("%d ", edges[1][i]);
    }
}