#include<iostream>
using namespace std;
bool checkPallindrome(int start, string str){
    cout<<"end is : "<<str.length()-1-start<<endl;
    if(start>(str.length()-1-start)){
        return true;
    }
    if(str[start]!=str[(str.length()-1-start)]){
        return false;
    }
    checkPallindrome(++start, str);
    return true;
}
int main() {
    string str = "adgda";
    cout<<checkPallindrome(0, str);
    return 0;
}