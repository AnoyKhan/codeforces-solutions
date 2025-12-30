#include <iostream>
#include <cmath>
using namespace std;

int BtoD(int x){
    int sum =0;
    for(int i =0; i<x; i++){
        sum += 1*pow(2,i);
    }
    return sum;
}
int main() {
    int T;
    cin>>T;
    if(1<=T && T<=10){
        for(int i =0; i<T; i++){
            long long x, sum =0;
            cin>>x;
            if(x>=1){
                while(x>0){
                    int res = x %2;
                    x /= 2;
                    sum += res;
                }
                cout<<BtoD(sum)<<endl;
            }
        }
    }
}