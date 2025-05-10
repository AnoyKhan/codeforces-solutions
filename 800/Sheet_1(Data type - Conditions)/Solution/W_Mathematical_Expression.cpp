#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a,b,sum;
    char c,q;
    cin>>a>>c>>b>>q>>sum;
    if(c == '+'){
        if(sum == (a+b)){
            cout<<"Yes";
        }else{
            cout<<a+b;
        }
    }else if(c == '-'){
        if(sum == (a-b)){
            cout<<"Yes";
        }else{
            cout<<a-b;
        }
    }else if(c == '*'){
        if(sum == (a*b)){
            cout<<"Yes";
        }else{
            cout<<a*b;
        }
    }
    return 0;
}
