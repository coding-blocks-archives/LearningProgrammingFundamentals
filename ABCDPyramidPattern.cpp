#include <iostream>
using namespace std;

// The ABCD Pyramid !
/*
ABCDEEDCBA 
ABCDDCBA 
ABCCBA 
ABBA 
AA
*/


int main() {
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        
        char ch = 'A';
        for(int j=1;j<=n-i;j++){
            cout<<ch;
            ch = ch + 1;
        }
        ch = ch - 1;
        
         for(int j=1;j<=n-i;j++){
            cout<<ch;
            ch = ch - 1;
        }
        cout<<endl;
    }
    return 0;
}
