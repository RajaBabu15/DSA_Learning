#include <iostream>
using namespace std;

int partison(int arr[], int low, int high) {
    int pivot = arr[high];
    int swap_ptr = low;
    for(int i = low; i <= high - 1; i++) {
        if(arr[i] < pivot) {
            swap(arr[i], arr[swap_ptr]);
            swap_ptr++;
        }
    }
    swap(arr[swap_ptr], arr[high]);
    return swap_ptr;
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partison(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void merge(int arr[], int low , int mid, int high){
    int *tmp_arr=new int[high-low+1];
    int i=low,j=mid+1,tmp=0;
    while(i<=mid&&j<=high){
        if(arr[i]<arr[j])
            tmp_arr[tmp++]=arr[i++];
        
        else
            tmp_arr[tmp++]=arr[j++];
    }
    while(i<=mid) tmp_arr[tmp++]=arr[i++];
    while(j<=high) tmp_arr[tmp++]=arr[j++];
    j=low;
    while(j<=high) {arr[j]=tmp_arr[j-low];
    j++;}
    
}

void mergeSort(int arr[], int low, int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main() {
    int arr[] = {10, 22,42,34,345,34,233,7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // quickSort(arr, 0, n - 1);
    mergeSort(arr,0,n-1);
    cout << "Sorted array: \n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
