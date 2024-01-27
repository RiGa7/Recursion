#include <iostream>
using namespace std;

int pow(int n, int x)
{
    if (x == 0){
        cout<<"x is 0 "<<endl;
        return 1;
    }
    if (x == 1){
        cout<<"x is 1 "<<endl;
        return n;
    }

    int ans = pow(n, x/2);
    cout<<"ans is : "<<ans<<endl;

    if (x % 2 == 0){
        cout<<"x is even"<<endl;
        return (ans*ans);
    }else{
        cout<<"x is odd "<<endl;
        return (ans*ans*n);
    }
}

int main()
{
    int n, x;
    cin >> n >> x;
    int ans = pow(n, x);
    cout<<"Answer is : "<<ans;
    return 0;
}