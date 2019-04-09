#include <iostream>
using namespace std;

// Printing Number Pyramid
/*
     1 
    123 
   12345 
  1234567 
 123456789
*/

int main() {
    
    int n;
    cin>>n;
    
    int i = 1; // i denotes the row no 
    while(i<=n){
        
        //Spaces 
        int space = 1;
        while(space<=n-i){
            cout<<" ";
            space = space + 1;
        }
        
        //Numbers 
        int no = 1;
        while( no<= 2*i - 1){
            cout<<no<<"";
            no = no  + 1;
        }
        
        //Print Endl
        cout<<endl;
        
                
        //Update the Row  Count 
        i = i + 1;
    }
    
    return 0;
}
