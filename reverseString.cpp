#include<iostream>
using namespace std;

string reverse(int start, int end, string &str){
    if(start>=end){
        return str;
    }
    swap(str[start], str[end]);
    start++;
    end--;
    reverse(start, end, str);
}

int main() {
    string str="nikki";
    reverse(0,str.length()-1, str);
    cout<<"Reversed and new string is : " <<str;
    return 0;
}