#include<stdio.h>
#include<stdlib.h>

int mutex=1;
int full=0;
int empty=3;
int x = 0;

int wait(int s){
    return --s;
}

int signal(int s){
    return ++s;
}

void producer(){
    mutex = wait(mutex);

    full = signal(full); //items ko bdha diya
    empty = wait(empty); // empty space ko kam kr diya

    x++;
    printf("Producer produces the item\n");
    mutex = signal(mutex);
}

void consumer(){
    mutex = wait(mutex);

    full = wait(full); // items ko consume kiya
    empty = signal(empty); // space ko free kiya

    printf("Consumer Consumes an item\n");
    x--;

    mutex = signal(mutex);
}

int main(){
    int choice;
    while(1){
        printf("\n1. Produceer \n2.Consumer \n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                if(mutex==1&&empty!=0){
                    producer();
                }else{
                    printf("Buffer is Full\n");
                }
                break;
            case 2:
                if(mutex==1&&full!=0){
                    consumer();
                }else{
                    printf("Buffer is Empty\n");
                }
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}
