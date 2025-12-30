#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arra[n]={0,1};
    if(n>=1 && n<= 45){
        for(int i =2; i<=n; i++){
            arra[i] = arra[i-1] + arra[i-2];
        }
    }
    for(int i: arra){
        cout<<i<<' ';
    }
    return 0;
}