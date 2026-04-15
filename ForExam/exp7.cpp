#include<stdio.h>
#include<stdlib.h>

int main(){
    int max[10][10],alloc[10][10],need[10][10];
    int available[10];
    int completed[10]={0}, safeSequence[10];

    int p,r,i,j,count=0,process;

    printf("Enter number of processes:\n");
    scanf("%d",&p);

    printf("Enter number of resources:\n");
    scanf("%d",&r);

    printf("Enter Max Matrix:\n");
    for(i=0;i<p;i++){
        printf("Process %d",i);
        for(j=0;j<p;j++){
            scanf("%d",&max[i][j]);
        }
    }

    printf("Enter Allocation matrix:\n");
    for(i = 0;i<p;i++){
        printf("Process %d",i);
        for(j=0;j<p;j++){
            scanf("%d",&alloc[i][j]);
        }
    }

    printf("Enter Available Resources:\n");
    for(i=0;i<r;i++){
        scanf("%d",&available[i]);
    }

    //Calculating need matrix

    for(i=0;i<p;i++){
        for(j=0;j<p;j++){
            need[i][j] = max[i][j]-alloc[i][j];
        }
    }

    while(count<p){
        process=-1;
        for(i=0;i<p;i++){
            if(!completed[i]){
                int canrun=1;
                for(j=0;j<p;j++){
                    if(need[i][j]>available[j]){
                        canrun=0;
                        break;
                    }
                }
                if(canrun){
                    process=i;
                    break;
                }
            }
        }
        if(process==-1){
            break; // no safe process to execute
        }
         printf("Process %d is executing....",process);
        for(j=0;j<p;j++){
            available[j]+=alloc[process][j];
        }
        completed[process] = 1;
        safeSequence[count++] = process;
    }
    if(count==p){
        printf("System is in Safe State\n");
        printf("Safe Sequence<\n");
        for(i = 0;i<p;i++){
            printf("P%d ",safeSequence[i]);
        }
        printf(">\n");
    }else{
        printf("System is in Unsafe State(Deadlock Possible)\n");
    }
    return 0;
}