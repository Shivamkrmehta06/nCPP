#include<stdio.h>

void warshall(int arr[20][20],int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            for(int k = 0;k<n;k++){
                if(arr[i][j]==0 && arr[i][k]==1 && arr[k][j]==1){
                    arr[i][j] = 1;
                }
            }
        }
    }
    printf("Path Matrix(Transitive Closure)\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[20][20],n;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);

    printf("Enter the Adjacency Matrix:\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("The Adjacency Matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    warshall(a,n);
    return 0;
}