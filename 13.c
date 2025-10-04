//13 graph using adjacency matrix
#include<stdio.h>
#include<stdlib.h>
struct Graph{
    int numVertices;
    int** adjMatrix;
};
struct Graph* createGraph(int vertices){
    struct Graph* graph=(struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices=vertices;
    graph->adjMatrix=(int*)malloc(vertices*sizeof(int));
    for(int i=0;i<vertices;i++){
        graph->adjMatrix[i]=(int*)malloc(vertices*sizeof(int));
        for(int j=0;j<vertices;j++){
            graph->adjMatrix[i][j]=0;
        }
    }
    return graph;
}
void addEdge(struct Graph* graph,int src,int dest){
    graph->adjMatrix[src][dest]=1;
    graph->adjMatrix[dest][src]=1;
}
void printGraph(struct Graph* graph){
    for(int i=0;i< graph->numVertices;i++){
        for(int j=0;j< graph->numVertices;j++){
            printf("%d",graph->adjMatrix[i][j]);
        }
        printf("\n");
    }
}
int main(){
    struct Graph* graph =createGraph(4);
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,3);
    addEdge(graph,2,3);
    printf("Adjacency Matrix:\n");
    printGraph(graph);
    for(int i=0;i<graph->numVertices;i++){
        free(graph->adjMatrix[i]);
    }
    free(graph->adjMatrix);
    free(graph);
return 0;
}
/*Adjacency Matrix:
0110
1001
1001
0110*/