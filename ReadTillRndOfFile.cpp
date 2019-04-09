#include <iostream>
using namespace std;

int main() {
    
    //Read all the numbers till EOF 
    
    int no;
    
    while(scanf("%d",&no)!=EOF){
        cout<<no*no<<endl;
    }
    
    
    return 0;
}
