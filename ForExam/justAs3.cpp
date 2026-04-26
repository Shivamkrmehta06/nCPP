// Selection Sort

// #include<stdio.h>
// #include<stdlib.h>

// void selectionSort(int *arr,int n){
//     for(int i=0;i<n-1;i++){
//         int minimum = i;
//         for(int j = i+1;j<n;j++){
//             if(arr[j]<arr[minimum]){
//                 minimum=j;
//             }
//         }
//         int temp = arr[minimum];
//         arr[minimum] = arr[i];
//         arr[i] = temp;
//     }
// }

// void printArray(int *arr,int n){
//     for(int i= 0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// int main(){
//     int n;
//     printf("Enter the number of elements in an Array:\n");
//     scanf("%d",&n);
//     int *a = (int*)malloc(sizeof(int)*n);
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         printf("Enter the element in an array:\n");
//         scanf("%d",&arr[i]);
//     }
//     selectionSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }

// Binary Search

// #include<stdio.h>
// #include<stdlib.h>

// int binarySearch(int* arr,int size,int key){
//     int start = 0;
//     int end = size-1;
//     int mid = start+(end-start)/2;
//     while(start<end){
//         if(arr[mid]==key){
//             return mid;
//         }else if(arr[mid]<key){
//             start = mid+1;
//         }else{
//             end = mid-1;
//         }
//         mid = start+(end-start)/2;
//     }
//     return -1;
// }

// int main(){
//     int n;
//     printf("Size of Array:\n");
//     scanf("%d",&n);

//     int *s = (int*)malloc(sizeof(int)*n);
//     for(int i=0;i<n;i++){
//         printf("Enter the element in an array:\n");
//         scanf("%d",&s[i]);
//     }

//     for(int i = 0;i<n;i++){
//         printf("%d ",s[i]);
//     }

//     int ans = binarySearch(s,n,3);
//     if(ans) printf("Element is at: %d",ans);
//     else printf("Element not found\n");
// }


// Quick Sort

#include<stdio.h>
#include<stdlib.h>

int partition(int *arr,int start,int end){
    int pivot = arr[start];
    int count = 0;
    for(int i = start+1;i<end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = start+count;
    int temp = arr[pivotIndex];
    arr[pivotIndex] = arr[start];
    arr[start] = temp;

    int i = start, j=end;

    while(i<pivotIndex&&j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>=pivot){
            j--;
        }
        if(i<pivotIndex&&j>pivotIndex){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    int p = partition(arr,start,end);

    quickSort(arr,start,p);
    quickSort(arr,p+1,end);
}

int main(){
    int arr[] = {4,2,1,3,7};
    quickSort(arr,0,5);
    for(int i =0;i<5;i++) printf("%d ",arr[i]);
}