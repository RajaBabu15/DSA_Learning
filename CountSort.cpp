#include <iostream>
using namespace std;
void countSort(int arr[], int n){
    // radix = [0 to 9]
    int radix_arr[10]={0};
    for(int i=0;i<n;i++){
        radix_arr[arr[i]]++;
    }
    int index=0;
    for(int i=0;i<10;i++){
        while(radix_arr[i]>0){
            arr[index++]=i;
            radix_arr[i]--;
        }
    }
}
int main() {
    int arr[] = {1, 4, 1, 2, 7, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    countSort(arr, n);
    cout << "Sorted array is: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}