/* #include<stdio.h>
#include<unistd.h> //used for system-level functions
#include<stdlib.h>
#include<pthread.h>// used to manage and create thread

int g = 0;

void* myThreadFun(void *vargp){
    int* myid = (int*) vargp;
    static int s = 0;\
    ++s,++g;
    printf("Thread Id: %d, Static: %d, Global: %d\n",*myid,++s,++g);
}

int main(){
    pthread_t tid;
    for(int i = 0;i<3;i++){
        pthread_create(&tid,NULL,myThreadFun,(void*)&tid);
    }
    pthread_exit(NULL);
    return 0;
} */

#include <iostream>
using namespace std;

//Match String problem

int matchString(string a, string b){
    int as = a.length();
    int bs = b.length();
    for(int i = 0;i<as-bs;i++){
        int j = 0;
        while(j<bs && a[i+j]==b[j]){
            j++;
        }
        if(j==bs) return i;
    }
    return -1;
}



int main() {
    
    return 0;
}
