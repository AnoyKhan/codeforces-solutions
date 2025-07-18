#include <iostream>
using namespace std;
int main() {
    char a,b;
    cin>>a;
    if((int)a>=97 && (int)a < 122){
        b = (int)a + 1;
        cout<<(char)b;
    }else if((int)a == 122){
        b = (int)a - 25;
        cout<<(char)b;
    }
    
    return 0;
}