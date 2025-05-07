#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double a;
    cin >>a;
    double x = (double)a-(int)a;
    if(x == 0){
        cout<<"int "<<(int)a;
    }else{
        cout<<"float "<<(int)a<<" "<<x;
    }
    return 0;
}
