#include<iostream>
#include<vector>
using namespace std;

void printArray(int *arr,int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void merge(int *arr, int s, int e){
    vector<int> temp;
    int mid = (s+e)/2;
    int leftPointer = s;
    int rightPointer = mid+1;

    if(leftPointer<= mid && rightPointer <= e){
        if(arr[leftPointer] < arr[rightPointer]){
            temp.push_back(arr[leftPointer++]);
        }else{
            temp.push_back(arr[rightPointer++]);
        }
    } 

    // if any elements  are remaining in the left side then add them to the end of temp array
    while(leftPointer <= mid)
        temp.push_back(arr[leftPointer++]);
    
    // adding the remaining elements from the right side to temp array
    while(rightPointer <= e)
        temp.push_back(arr[rightPointer++]);

    for(int i=0 ;i < temp.size(); i++)
        arr[s + i] = temp[i];

}

void mergeSort(int* arr, int s, int e){
    if(s>=e)
        return ;

    int mid = (s+e)/2;
    
    //divide array into two halves  
    mergeSort(arr, s ,mid); 
    mergeSort(arr, mid + 1, e);  

    //merge the two sorted halves  
    merge(arr, s, e);  
}

int main() {
    int arr[] = {3,5,1,9,2,7,6};
    int n = 7;
    cout << "Given array is \n";
    printArray(arr, n);
    mergeSort(arr, 0, n-1);
    cout << "\n\nSorted array is \n";
    printArray(arr, n);
    return 0;
}