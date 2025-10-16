#include <iostream>
using namespace std;
int main() {
    int n,j, Even=0,Odd=0,Positive=0, Negative=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>j;
        if(j%2==0){
            Even++;
        }else{
            Odd++;
        }if(j>0){
            Positive++;
        }else if(j<0){
            Negative++;
        }
    }
    cout<<"Even: "<<Even<<endl<<"Odd: "<<Odd<<endl<<"Positive: "<<Positive<<endl<<"Negative: "<<Negative;
    return 0;
}