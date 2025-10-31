#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(1<=n && n<=99){
        for(int i =1; i<=n; i++){
            for(int k = 1; k<=n-i; k++){
                cout<<" ";
            }
            for(int j = 0; j<i*2-1; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}