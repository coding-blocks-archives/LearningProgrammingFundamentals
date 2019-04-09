#include<iostream>
using namespace std;

//Basic template C++ code
int main(){
    
    int a,b;
    int sum;
    
    //Input
    cin>>a;
    cin>>b;
    //Assigment + Arithmetic Operations
    sum = (a+b);
    
    //Conditional Execution 
    if(sum%2==0){
        cout<<"Sum is EVEN"<<endl;
        
    }
    else{
        cout<<"Sum is ODD"<<endl;
    }
    
    //Output
    cout<<"Sum is "<<sum<<'\n';
    cout<<"Hello Everyone !";
    
    return 0;
}
