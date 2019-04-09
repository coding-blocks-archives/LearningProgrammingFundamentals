#include <iostream>
#include<cstdio>
using namespace std;

//Square Root of N upto p places

int main() {
      
    int n,p;
    cin>>n>>p;
    
    float ans = 0;
    float inc = 1;
    
    int times = 0; // p+1 times for p places(after decimal)
    
    while(times<=p){
    
        while(ans*ans <=n){
            ans = ans + inc;
        }
        
        ans = ans - inc;
        inc = inc/10;
        times = times + 1;
        
    }
    //Dry Run this program - NOTEBOOK !
    
    //cout<<ans<<endl;
    printf("%.6f",ans);
    

    return 0;
}
