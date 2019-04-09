#include <iostream>
using namespace std;

// Typecasting Concept
int main() {
    
    int a = 2;
    char ch = 'A';
    
    // Char + Int = Int 
    cout<< (ch+a) <<endl;
    
    ch = ch + 2;
    
    cout << ch <<endl;
    
    // Explicit Typecast - 1) Upgrade 2) Degraded 
    cout<< int(ch) <<endl;
    cout<< bool(ch) <<endl; // Any non - zero value is considered as true (1)
    
    return 0;
}
