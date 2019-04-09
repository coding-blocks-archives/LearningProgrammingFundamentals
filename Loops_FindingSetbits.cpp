#include <iostream>
using namespace std;

// Given N, find the no set bits (No of 1's in binary represenation)
// Bitwise Operators !

int main() {

    int n;
    cin>>n;
    int ans = 0;
    
    for( ;n>0;n=n>>1){
        ans = ans + (n&1);    
    }
    cout<<ans <<endl;
    
    return 0;
}
