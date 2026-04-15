#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *task1(void* arg){
    for(int i = 0;i<=5;i++){
        printf("Numbers: %d\n",i);
        sleep(1);
    }
    return NULL;
}

void* task2(void* args){
    for(char c = 'A';c<='E';c++){
        printf("Characters: %c\n",c);
        sleep(1);
    }
    return NULL;
}

int main(){
    pthread_t t1;
    pthread_t t2;

    pthread_create(&t1,NULL,task1,NULL);
    pthread_create(&t2,NULL,task2,NULL);
    
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    return 0;
}