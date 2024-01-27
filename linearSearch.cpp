#include<iostream>
using namespace std;

bool search(int arr[] , int n , int key){
    if(n==0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    return search(arr+1,n-1, key);    
}

int main() {
    int arr[] = {3,5,2,0,2};
    bool ans = search(arr, 5, 9);   
    if(ans){
        cout<<"Found " <<endl;
    } else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}