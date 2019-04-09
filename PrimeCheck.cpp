#include <iostream>
using namespace std;

// Given a Number, if N is prime or not !


int main() {
    
    int n;
    cin>>n;
    
    //Logic for prime
    int i = 2;
    while(i<=n-1){
        //I need to check if n is divisible by some number i which lies btw 2 and n-1 (both inclusive)
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            //---> Stop Loop 
            break;
        }
        i = i + 1;
    }
    // When the number is prime ?
    if(i==n){
        cout<<"Prime "<<endl;
    }
    
    return 0;    
}
