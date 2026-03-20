#include <iostream>
using namespace std;

void merge(int *arr, int start, int end){
    int mid = start+(end-start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    int maI = start;
    for(int i = 0;i<len1;i++){
        first[i] = arr[maI++];
    }
    maI = mid+1;
    for(int i =0;i<len2;i++){
        second[i] = arr[maI++];
    }

    //merge two sorted arrays
    int i1 = 0;
    int i2 = 0;
    maI = start;
    while(i1<len1&&i2<len2){
        if(first[i1]<second[i2]){
            arr[maI++] = first[i1++];
        }else{
            arr[maI++] = second[i2++];
        }
    }

    while(i1<len1){
        arr[maI++] = first[i1++];
    }
    while(i2<len2){
        arr[maI++] = second[i2++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr,int start, int end){
    if(start>=end){
        return;
    }
    int mid = start+(end-start)/2;
    //left wala part sort karte hai
    mergeSort(arr,start,mid);
    //right wala part sort karte hai
    mergeSort(arr,mid+1,end);
    //merge karte hai
    merge(arr,start,end);
}

// let's crack Quick Sort
int partition(int *arr,int start,int end){
    int pivot = arr[start];
    int count = 0;
    for(int i = start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = start+count;
    swap(arr[pivotIndex],arr[start]);
    int i = start;
    int j = end;
    while(i<pivotIndex&&j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>=pivot){
            j--;
        }
        if(i<pivotIndex&&j>pivotIndex){
            swap(arr[i++],arr[j--]);
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

int main() {
    // int arr[] = {8,4,3,5,6,7,1,2};
    // quickSort(arr,0,7);
    // for(auto x:arr) cout<<x<<" ";
    
    cout<<pow(-2,2)<<endl;

    return 0;
}
