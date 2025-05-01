#include <iostream>
using namespace std;
int main() {
    char a;
    cin>>a;
    int x = (int)a;
    if(x >=97 && x <=122){
        x = (int)a - 32;
        cout<<(char)x;
    }else if(x >=65 && x <=90){
        x = (int)a + 32;
        cout<<(char)x;
    }
    return 0;
}