// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int i,n;
//     printf("Enter the number of processes:\n");
//     scanf("%d",&n);

//     int at[10],bt[10],ct[10],rem_bt[10];
//     int tq;

//     for(int i = 0;i<n;i++){
//         printf("Enter the arrival time for process %d\n",i);\
//         scanf("%d",&at[i]);
//         printf("Enter the burst time for process %d\n",i);
//         scanf("%d",&bt[i]);
//         rem_bt[i]=bt[i];
//     }

//     printf("Enter the time quantum:\n");
//     scanf("%d",&tq);

//     int completed = 0, time=0;

//     while(completed<n){
//         int executed = 0;
//         for(i=0;i<n;i++){
//             if(at[i]>time&&rem_bt[i]>0){
//                 executed=1;
//                 if(rem_bt[i]<tq){
//                     time+=rem_bt[i];
//                     rem_bt[i]=0;
//                     ct[i]=time;
//                     completed++;
//                 }else{
//                     rem_bt[i] -= tq;
//                     time+=tq;
                    
//                 }
//             }
//         }
//         if(!executed){
//             time++;
//         }
//     }
//     printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");
//     float totalTAT = 0;
//     float totalWT = 0;
//     for(int i = 0;i<n;i++){
//         int tat = ct[i]-at[i];
//         int wt = tat-bt[i];
//         totalTAT += tat;
//         totalWT += wt;
//         printf("\nP%d\t%d\t%d\t%d\t%d\t%d\n",i+1,at[i],bt[i],ct[i],tat,wt);
//     }
//     printf("Average TAT: ",totalTAT/n);
//     printf("Average WT:",totalWT/n);
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>
// #include<pthread.h>

// void* task1(void* arg){
//     for(int i = 1;i<=5;i++){
//         printf("Numbers:%d\n",i);
//         sleep(1);
//     }
//     return NULL;
// }

// void* task2(void* arg){
//     for(char i = 'A';i<='E';i++){
//         printf("Alphabets:%c\n",i);
//         sleep(1);
//     }
//     return NULL;
// }

// int main(){
//     pthread_t t1;
//     pthread_t t2;

//     pthread_create(&t1,NULL,task1,NULL);
//     pthread_create(&t2,NULL,task2,NULL);

//     pthread_join(t1,NULL);
//     pthread_join(t2,NULL);
//     return 0;
// }

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>

int main(){
    char buff;
    int fd,fd1;
    fd = open("one.txt",O_RDONLY);
    fd1 = open("two.txt",O_WRONLY|O_CREAT);
    while(read(fd,&buff,1)){
        write(fd1,&buff,1);
    }
    printf("The File is successfully copied\n");
    return 0;
}