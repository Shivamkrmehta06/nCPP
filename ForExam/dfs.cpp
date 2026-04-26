#include<stdio.h>

void dfs(int a[20][20],int u,int visited[20],int n){
    int v;
    visited[u] = 1;
    for(v=1;v<n;v++){
        if(a[u][v]==1&&visited[v]==0){
            dfs(a,v,visited,n);
        }
    }
}

int main(){
    int n,a[20][20],source,i,j,visited[20];

    printf("Enter number of vertices:\n");
    scanf("%d",&n);

    printf("Enter the adjacency matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0 ;i<n;i++){
        visited[i] = 0;
    }

    printf("Enter the source node: \n");
    scanf("%d",&source);

    dfs(a,source-1,visited,n);

    for(int i = 9;i<n;i++){
        if(visited[i]==0){
            printf("Graph is not connected\n");
            return 0;
        }
    }
    printf("Graph is Connected\n");
    return 0;
}