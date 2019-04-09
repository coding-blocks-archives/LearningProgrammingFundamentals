#include <iostream>
using namespace std;

//Print the Alternating 0's and 1's Triangle (For Loop)
/*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1
*/

int main() {
    
    int n;
    cin>>n;
    
    
    for(int i=1;i<=n;i++){
        
        //Tertiary + Bitwise Operator
        int val = (i&1) ? 1 : 0;
      
            
        for(int j=1;j<=i;j++){
            cout<<val <<" ";
            val = 1 - val;
        }
        
        
        cout<<endl;
    }
    
    
    return 0;
}
