#include<stdio.h>

void bfs(int a[20][20],int source,int visited[20],int n){
    int queue[20], front=0, rear=-1;
    int u,v;

    queue[++rear] = source;

    while(front<=rear){
        u = queue[front++];
        for(v=0;v<n;v++){
            if(a[u][v]==1&&visited[v]==0){
                queue[++rear] = v;
                visited[v] = 1;
            }
        }
    }

}

int main(){
    int n, a[20][20],visited[20], source,i,j;

    printf("Enter the number of vertices:\n");
    scanf("%d",&n);

    printf("Enter the Adjacency Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0;i<n;i++){
        visited[i] = 0;
    }

    printf("Entert the source node:\n");
    scanf("%d",&source);

    visited[source-1] = 1;
    bfs(a,source-1,visited,n);

    for(int i = 0;i<n;i++){
        if(visited[i]==1){
            printf("Graph %d is connected\n",i+1);
        }else{
            printf("Graph %d is not connected",i+1);
        }
    }

}