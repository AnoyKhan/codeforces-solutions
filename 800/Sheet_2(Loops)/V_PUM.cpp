#include <iostream>
using namespace std;
int main() {
    int n, k=1;
    cin>>n;
    if(n>=1 && n<=20){
        for(int i =1; i<=n; i++){
            if(i<=n){
                for(int j =0; j<=3; j++){
                    if(j == 3){
                        cout<<"PUM"<<endl;
                        k++;
                    }else{
                        cout<<k<<" ";
                        k++;
                    }
                }
            }
        }
    }
    return 0;
}