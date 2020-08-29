#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

/*
	excercise --> make a directed graph and print how many nodes are added to each nodes and what's are these. And also
	print indegree and outdegree of each nodes.

*/

int  main()
{
    int numNodes, numEdges;

    scanf("%d %d", &numNodes, &numEdges);
    vector <int> edges[numEdges];

    for(int i=0; i<numEdges; i++){
        int x, y;
        scanf("%d %d", &x, &y);

        edges[x].push_back(y);
    }

    for(int i=1; i<=numNodes; i++){
            printf("Node %d (%d nodes connected): ", i, edges[i].size());
        for(int j=0; j<edges[i].size(); j++){
            printf("%d ", edges[i][j]);
        }
        printf("\n");
    }
    // getting all connected node of a node
//    for(int i=0; i < edges[1].size(); i++){
//        printf("%d ", edges[1][i]);
//    }

    /// finding indegree and outdegree of each node
    for(int x=1; x<=numNodes; x++){

        int cnt = 0;
    for(int i=1; i<=numNodes; i++)
    {
        for(int j=0; j<=edges[i].size(); j++){
            if(edges[i][j] == x)
                cnt++;
        }
    }

     printf("indegree: %d and Outdegree: %d of Node %d\n", cnt, edges[x].size(), x);

    }
}
