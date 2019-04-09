#include <iostream>
using namespace std;

// Write a Logic, which computes the sum/ avg of N numbers
//Input : N , followed N integers 
// Output : Sum, Average 

int main() {
    
    int n;
    int sum = 0; // Initialisation
    cin>>n;
    
    //First Input and Output N numbers
    int no,i;
    
    i=1;
    while(i<=n){
        cin>>no;
        sum = sum + no;
        //cout<<no<<",";
        i = i + 1;
    }
    
    cout<<sum<<endl;
    
    float avg;
    avg = float(sum)/n;
    
    cout<<"Average is "<<avg<<endl;
    
    return 0;
}
