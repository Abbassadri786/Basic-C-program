// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n=5,i,j,k;
    
    for(i=1; i<=n; i++){
        //1st Triangle
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        //For Star 1
        for(int star1=i-1; star1!=0 ;star1--){
            cout<<"*"<<" ";
        }
        //For Star 2
        for(int star2 = i-1; star2!=0; star2--){
            cout<<"*"<<" ";
        }
        //for 2nd Triangle
        for(int j=n-i+1; j!=0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
