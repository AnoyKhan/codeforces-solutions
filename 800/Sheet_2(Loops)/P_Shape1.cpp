#include <iostream>
using namespace std;
void star(int a){
    while(a>0){
        cout<<"*";
        a--;
    }cout<<endl;
};
int main() {
    int n;
    cin>>n;
    if(n>0 && n<100){
        for(int i=n; i>0; i--){
            star(i);
        }
    }
    return 0;
}