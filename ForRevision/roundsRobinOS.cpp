#include<stdio.h>

int main(){
    int n,i=0;
    int at[10],bt[10],rm_bt[10];
    int time_quantum;
    int time = 0; //system clock time
    int wt = 0, tat = 0;

    printf("Enter number of processes:\n");
    scanf("%d",&n);

    for(i = 0;i<n;i++){
        printf("Process %d",i+1);
        printf("Enter Arrival Time: ");
        scanf("%d",&at[i]);

        printf("Enter burst time: ");
        scanf("%d",&bt[i]);
        rm_bt[i] = bt[i];
    }

    printf("Enter Quantum Time: ");
    scanf("%d",&time_quantum);

    int completed;
    do{
        completed = 1;
        for(i= 0;i<n;i++){
            if(rm_bt[i]>0){
                completed = 0;
                if(rm_bt[i]>time_quantum){
                    time += time_quantum;
                    rm_bt[i] -= time_quantum;
                }
                else{
                    time += rm_bt[i];
                    int process_tat = time - at[i];
                    int process_wt = process_tat - bt[i];

                    wt += process_wt;
                    tat += process_tat;

                    rm_bt[i] = 0;
                }
            }
        }
    }while(completed==0);

    printf("Avergae Turn around time: %.2f",(float)tat/n);
    printf("Average waiting time: %.2f",(float)wt/n);
}


/* 

int main(){
    int n,i=0;
    int at[10],bt[10],rem_bt[10];
    int time = 0;
    int time_quantum;
    int wt = 0;
    int tat = 0;

    printf("Enter number of processes: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Process %d",i+1);
        printf("Enter arrival time: ");
        scanf("%d",&at[i]);

        printf("Enter Burst time:");
        scanf("%d",&bt[i]);
        rem_bt[i] = bt[i];
    }
    
    printf("Enter Quantum Time: ");
    scanf("%d",time_quantum);

    int completed = 0;

    do{
        completed = 1;
        for(i = 0;i<n;i++){
            if(rem_bt[i]>0){
                completed = 0;
                if(rem_bt[i]>time_quantum){
                    time += time_quantum;
                    rem_bt -= time_quantum;
                }else{
                    time += rem_bt[i];

                    int process_tat = time - at[i];
                    int process_wt = process_tat - bt[i];

                    wt += process_wt;
                    tat += process_tat;

                    rem_bt[i] = 0;
                }
            }
        }
    }while(completed==0);

    printf("Average Turn Around time: %.2f",(float)tat/n);
    printf("Average waiting time: %.2f",(float)wt/n);
}

*/