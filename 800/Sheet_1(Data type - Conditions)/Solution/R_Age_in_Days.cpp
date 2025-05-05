#include <iostream>
using namespace std;
int main() {
    int a,year,months,days;
    cin>>a;
    year = a/365;
    months =a % 365/30;
    days = (a % 365)%30;
    cout<<year<<" "<<"years"<<"\n"<<months<<" "<<"months"<<"\n"<<days<<" "<<"days";
    return 0;
}