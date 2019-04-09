#include <iostream>
using namespace std;

// Printing N terms of the Fibonacci Sequence !

int main() {
    
    int a = 0 , b = 1, c = a + b;
    
    int n;
    cin>>n;
    
    cout<<"0,1,";
    int i = 2; // i  basically counts how many terms you have printed so far !
    
    while(i<n){
        
        cout<< c<<",";
        
        //I will compute the next c 
        a = b;
        b = c;
        c = a + b;
        
        //Update the i variable 
        i = i  + 1;
    }
        
    
}

// TODO - DO it yourself !
// Given a number n, you have check if it is part of Fibonacci Seq or not !
