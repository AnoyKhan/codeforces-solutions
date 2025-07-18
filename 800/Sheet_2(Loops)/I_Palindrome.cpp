#include <iostream>
using namespace std;
int main() {
    int num, reversed = 0;
    cin >> num;
    int original = num;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if(original==reversed){
        cout<<original<<endl;
        cout<<"YES";
    }else{
        cout<<reversed<<endl;
        cout<<"NO";
    }
    return 0;
}
