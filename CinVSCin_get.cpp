#include <iostream>
using namespace std;


int main() {
    
    char ch;
    //Init 
    cin>>ch;
    
    //Stopping Criteria
    while(ch!='!'){
        cout<<ch;
        //Update
        cin>>ch;
    }
    
    
    return 0;
}
