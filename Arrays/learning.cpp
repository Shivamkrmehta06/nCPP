#include <iostream>
using namespace std;

void subArray(int* arr,int size){
    for(int i = 0;i<size;i++){
        for(int j = i;j<size;j++){
            for(int k = i;k<j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    subArray(arr,5);
    return 0;
}
