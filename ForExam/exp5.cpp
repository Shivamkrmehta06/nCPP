#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n;
    printf("Enter the number of processes:\n");
    scanf("%d",&n);

    int at[n],bt[n],ct[n], rem_bt[n];
    int tq;

    for(i = 0;i<n;i++){
        printf("Enter the arrival time for process %d\n",i);
        scanf("%d",&at[i]);
        printf("Enter the burst time for process %d\n",i);
        scanf("%d",&bt[i]);
        rem_bt[i] = bt[i];
    }

    printf("Enter the Time Quantum:\n");
    scanf("%d",&tq);

    int time = 0,completed = 0;
    while(completed<n){
        int executed = 0;
        for(i=0;i<n;i++){
            if(at[i]<=time && rem_bt[i]>0){
                executed = 1;
                if(rem_bt[i]<=tq){
                    time += rem_bt[i];
                    rem_bt[i] = 0;
                    ct[i] = time;
                    completed++;
                }else{
                    rem_bt[i] -= tq;
                    time += tq;
                }
            }
        }
        if(!executed){
            time++;
        }
    }
    float total_tat = 0;
    float total_wt = 0;
    //calculate TAT anc WT
    printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");
    for(i = 0;i<n;i++){
        int tat = ct[i]-at[i];
        int wt = tat - bt[i];
        total_tat += tat;
        total_wt += wt;
        printf("\nP%d\t%d\t%d\t%d\t%d\t%d\n",i+1,at[i],bt[i],ct[i],tat,wt);
    }

    printf("Average Waiting Time: %f",total_wt/n);
    printf("Average TurnAround Time: %f",total_tat/n);

}