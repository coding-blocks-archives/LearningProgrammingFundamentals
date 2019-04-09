#include <iostream>
using namespace std;

//Global Variable 
int y = 100;
int x = 1000;

int main() {
    
    //Local Varialbe
    int x = 10 ;
    cout<< x <<endl; // Any value , Garabage Values
    cout<< y <<endl;
    ::x = ::x + 2;
    cout<< ::x <<endl; //Global X
    //Global varialbe can accessed anywhere 
    // Local variables are not visible outside the block (main)
    
    
    //Loop
    int i;
    for(i=0;i<=5;i++){
        cout<<i<<endl;
    }
    cout<<i <<endl;
    
    
    
    
}
