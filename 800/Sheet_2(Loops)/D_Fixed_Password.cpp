#include <iostream>
using namespace std;
int main() {
    int n=1999,j;
    while(1){
        cin>>j;
        if(j==n){
            cout<<"Correct";
            break;
        }else{
            cout<<"Wrong"<<endl;
        }
    }
    return 0;
}