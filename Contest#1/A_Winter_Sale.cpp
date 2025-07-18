#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    double x,p,original;
    cin>>x>>p;
    original = p/(1-x/100);
    cout<<fixed<<setprecision(2)<<original;
    
    return 0;
}