#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    if(s == "+" || s == "-" || s == "*" || s == "/"){
        for(int i =0; i<n; i++){
            int a;
            cin>>a;
            for(int j =0; j<a; j++){
                cout<<s;
            }cout<<endl;
        }
    }
}