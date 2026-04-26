#include<stdio.h>

int min(int a,int b){
    return (a>b)?b:a;
}

void flloyds(int a[20][20],int n){
    int d[20][20];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            d[i][j] = a[i][j];
        }
    }
    for(int k = 0;k<n;k++){
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    printf("The path matrix is;\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[20][20], n;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    printf("Enter the cost adjacency matrix(use 999 for infinity:\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    flloyds(a,n);
    return 0;
}