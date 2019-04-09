#include <iostream>
using namespace std;

// I will take and 'break' and 'continue' 

// Break - Stop the execution of the loop 
// Continue - to Continue the execution of the loop

int main() {
    
    
    int i = 1;
    while(i<=10){
        
        
        if(i==4){
            i = i + 1;
            continue;
        }
        cout<<i<<endl;
        i = i + 1;
    }
    
    return 0;
}
