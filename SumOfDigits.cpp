#include <iostream>
using namespace std;

//Given a number, to find the sum of its digits !

int main() {
    
    int n;
    
    int sum  = 0 ;
    
    //Init 
    cin>>n;
    
    while(n>0){
        int last_digit = n%10;
        sum = sum + last_digit;
        
        //Update 
        n = n/10;
    }
    
    
    cout<<"Sum is "<<sum<<endl;

    return 0;
}
