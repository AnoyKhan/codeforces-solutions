#include <iostream>
using namespace std;
int main() {
    long long n,j,t=1;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>j;
        if(j>0){
            for(int k=1; k<=j; k++){
                t*=k;
            }
        }
        cout<<t<<endl;
        t = 1;
    }
    return 0;
}