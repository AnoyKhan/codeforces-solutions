#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    if(t>0 && t<=10){
        for(int i=0; i<t; i++){
            int x,y,count = 0;
            cin>>x>>y;
            if(x>=0 && y>=0){
                if(x<y){
                    for(int j =x+1; j<y; j++){
                        if(j%2 != 0){
                            count += j;
                        }
                    }
                    cout<<count<<endl;
                    count =0;
                }else if(x>y){
                    for(int j = x-1; j>y; j--){
                        if(j%2 != 0){
                            count += j;
                        }
                    }
                    cout<<count<<endl;
                    count =0;
                }else if(x==y){
                    cout<<count<<endl;
                }
            }
        }
    }

    return 0;
}