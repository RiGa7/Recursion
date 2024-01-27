#include<iostream>
using namespace std;

bool binarySearch(int arr[] , int s, int e , int key){
    if(s>=e){
        return false;
    }
    int mid = (s+e)/2;
    cout<<"mid is : "<<mid<<endl;
    if(arr[mid] == key){
        return true;
    }if(arr[mid]<key){
        return binarySearch(arr, mid+1, e,key );
    }else{
        return binarySearch(arr, s,mid-1, key);
    }    
}

int main() {
    int arr[] = {3,5,12,19,20};
    bool ans = binarySearch(arr, 0,5, 1);   
    if(ans){
        cout<<"Found " <<endl;
    } else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}