#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<pthread.h>
int g = 0;

void* myThread(void* vargp){
    int* myid = (int*) vargp;
    static int s = 0;
    ++s;++g;
    printf("Thread id: %d, Static: %d, Global: %d",*myid,++s,++g);
}

int main(){
    pthread_t  tid;
    for(int i = 0;i<3;i++){
        pthread_create(&tid,NULL,myThread,(void*)&tid);
    }
    pthread_exit(NULL);
    return 0;
}