
// #include<stdio.h>

// int main(){
//     int i,n;
//     printf("Enter the number of processes:\n");
//     scanf("%d",&n);

//     int at[n],bt[n],rem_bt[n],ct[n];
//     int tq;

//     for(i=0;i<n;i++){
//         printf("Enter the arrival time for P%d\n",i);
//         scanf("%d",&at[i]);
//         printf("Enter the burst time for P%d\n",i);
//         scanf("%d",&bt[i]);
//     }

//     printf("Enter the Time Quantum: \n");
//     scanf("%d",&tq);

//     int time = 0, completed = 0;

//     while(completed<n){
//         int executed = 0;
//         for(i=0;i<n;i++){
//             if(at[i]<=time&&rem_bt[i]>0){
//                 executed = 1;
//                 if(rem_bt[i]<=tq){
//                     time+=rem_bt[i];
//                     rem_bt[i] = 0;
//                     ct[i] = time;
//                     completed++;
//                 }else{
//                     rem_bt[i] -= tq;
//                     time += tq;
//                 }
//             }
//         }
//         if(!executed){
//             time++;
//         }
//     }

//     float totalTAT = 0, totalWT = 0;

//     printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");

//     for(i = 0;i<n;i++){
//         int tat = ct[i] - at[i];
//         int wt = tat - bt[i];
//         totalTAT += tat;
//         totalWT += wt;
//         printf("\nP%d\t%d\t%d\t%d\t%d\t%d\n",i+1,at[i],bt[i],ct[i],tat,wt);
//     }

//     printf("Total Average Turn Around Time: %f\n",totalTAT/n);
//     printf("Total Average Waiting Time: %f\n",totalWT/n);

// }


// #include<stdio.h>
// #include<stdlib.h>

// int mutex=1;
// int empty=3;
// int full=0;
// int x=0;

// int wait(int s){
//     return --s;
// }

// int signal(int s){
//     return ++s;
// }

// void producer(){
//     mutex = wait(mutex); //lock lga diya

//     full = signal(full); //producer produce kiya
//     empty = wait(empty); //empty space kam kiya

//     x++;
//     printf("Producer produces the item\n");

//     mutex = signal(mutex); //lock release kiya
// }

// void consumer(){
//     mutex = wait(mutex); //lock lga diya

//     full = wait(full); // items consume kiya
//     empty = signal(empty); // empty space increase ki

//     printf("Consumer consumes the item\n");
//     x--;

//     mutex = signal(mutex);
// }

// int main(){
//     int choice;
//     while(1){
//         printf("\n1. Producer \n2. Consumer \n3. Exit\n");
//         printf("Enter your choice:\n");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:
//                 if(mutex==1&&empty!=0){
//                     producer();
//                 }else{
//                     printf("Buffer is full\n");
//                 }
//                 break;
//             case 2:    
//                 if(mutex==1&&full!=0){
//                     consumer();
//                 }else{
//                     printf("Buffer is empty\n");
//                 }
//                 break;
//             case 3:
//                 exit(0);
            
//             default:
//                 printf("Invalid Case\n");
//             }
//         }
//     return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int max[10][10], alloc[10][10], need[10][10];
//     int available[10];
//     int completed[10]={0}, safeSequence[10];

//     int p,r,i,j,count=0,process;

//     printf("Enter number of Process:\n");
//     scanf("%d",&p);

//     printf("Enter number of resources:\n");
//     scanf("%d",&r);

//     printf("Enter Max Matrix:\n");
//     for(i=0;i<p;i++){
//         printf("Process %d\n",i);
//         for(j=0;j<p;j++){
//             scanf("%d",&max[i][j]);
//         }
//     }

//     printf("Enter allocation matrix:\n");
//     for(i=0;i<p;i++){
//         printf("Process %d\n",i);
//         for(j=0;j<p;j++){
//             scanf("%d",&alloc[i][j]);
//         }
//     }

//     printf("Enter Available resources:\n");
//     for(i=0;i<p;i++){
//         scanf("%d",&available[i]);
//     }

//     for(i=0;i<p;i++){
//         for(j=0;j<p;j++){
//             need[i][j] = max[i][j]-alloc[i][j];
//         }
//     }

//     while(count<p){
//         process=-1;
//         for(i=0;i<p;i++){
//             int canrun=1;
//             if(!completed[i]){
//                 for(j=0;j<p;j++){
//                     if(need[i][j]>available[j]){
//                         canrun=0;
//                         break;
//                     }
//                 }
//             }
//             if(canrun){
//                 process=i;
//                 break;
//             }
//         }
//         if(process==-1){
//             break; //no process is safe
//         }
//         printf("Executing the Process %d...\n",process);
//         for(j=0;j<p;j++){
//             available[j]+=alloc[process][j];
//         }
//         completed[process] = i;
//         safeSequence[count++] = process;
//     }
//     if(count==p){
//         printf("System is Safe\n");
//         printf("Safe Sequence <\n");
//         for(i=0;i<p;i++){
//             printf("P %d",safeSequence[i]);
//         }
//         printf(">\n");
//     }else{
//         printf("System is not safe(Deadlock is possible)");
//     }
//     return 0;
// }



#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,pages[50];
    int frames[10],frameCount;
    int i,j,k;
    int index=0;
    int pageFaults=0;

    printf("Enter the number of pages\n");
    scanf("%d",&n);

    printf("Enter the reference string to page\n");
    for(i=0;i<n;i++){
        scanf("%d",&pages[i]);
    }

    printf("Enter the number of frames:\n");
    scanf("%d",&frameCount);

    for(k=0;k<frameCount;k++){
        scanf("%d",&frames[k]);
    }

    //FIFO Logic
    for(i=0;i<n;i++){
        int found=0;
        for(k=0;k<frameCount;k++){
            if(frames[k]==pages[i]){
                found=1;
                break;
            }
        }
        if(!found){
            frames[index]=pages[i];
            index=(index+1)%frameCount;
            pageFaults++;
            printf("\n\t%d\t\n",pages[i]);
            for(k=0;k<frameCount;k++){
                printf("\n\t%d",frames[k]);
            }
            printf("\n");
        }else{
            printf("\n\tNo pagefaults %d",pages[i]);
        }
    }
    printf("Total Page Faults:%d",pageFaults);
    return 0;
}