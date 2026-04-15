#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
    int pid = fork();
    if(pid==0){
        printf("Child Process\n");
        printf("Child process id: %d\n",getpid());
        printf("Parent process id: %d\n",getppid());
        printf("Finished with child.\n");
    }else{
        wait(NULL);
        printf("\nParent Process\n");
        printf("Child process id: %d\n",pid);
        printf("Parent Process id: %d\n",getpid());
    }
}