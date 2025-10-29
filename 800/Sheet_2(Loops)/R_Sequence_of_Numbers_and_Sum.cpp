#include <iostream>
using namespace std;
int main() {
    int a,b;
    bool contain = true;
    while(contain){
        int count=0;
        cin>>a>>b;
        if(a>0 && b>0){
            if(a>b){
                for(int i = b; i<=a; i++){
                    count += i;
                    cout<<i<<" ";
                }
                cout<<"sum ="<<count<<endl;
            }else if(a<b){
                for(int i = a; i<=b; i++){
                    count += i;
                    cout<<i<<" ";
                }
                cout<<"sum ="<<count<<endl;
            }else if(a==b){
                for(int i = a; i<=b; i++){
                    count += i;
                    cout<<i<<" ";
                }
                cout<<"sum ="<<count<<endl;
            }
            count = 0;

        }else {
            contain = false;
        }
    }
    return 0;
}