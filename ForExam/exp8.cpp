#include<stdio.h>

int main(){
    int n, pages[50];
    int frames[10];
    int frameCount;
    int i,j,k;
    int pageFaults=0;
    int index = 0;

    printf("Enter the number of pages:\n");
    scanf("%d",&n);

    printf("Enter the refernce string to pages:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&pages[i]);
    }

    printf("Enter the number of Frames:\n");
    scanf("%d",&frameCount);

    for(int i = 0;i<frameCount;i++){
        frames[i] = -1;
    }

    printf("\nRef. String\tFrames\n");

    //FIFO Logic

    for(i=0;i<n;i++){
        int found = 0;
        for(k=0;k<frameCount;k++){
            if(frames[k]==pages[i]){
                found=1;
                break;
            }
        }
        //if not found then there is page fault
        
        if(!found){
            frames[index]=pages[i];
            index=(index+1)%frameCount;
            pageFaults++;
            printf("\n\t\t%d",pages[i]);
            for(k=0;k<frameCount;k++){
                printf("\n\t%d",frames[k]);
            }
            printf("\n");
        }else{
            printf("\n\tNo PageFault %d\n",pages[i]);
        }
    }
    printf("Total Page Faults:%d\n",pageFaults);
    return 0;
}