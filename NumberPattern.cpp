#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    int row  = 1;
    int val = 1;
    while(row <=n){
        
        //Print Numbers in every row 
        // Count of Numbers = row 
        int count = 1;
        while(count<=row){
            //cout<<count <<" ";
            cout<<val<<" ";
            val = val + 1;
            count = count + 1;
        }
        
        
        cout<<endl;
        row = row + 1;
    }
    
    
    return 0;
}
