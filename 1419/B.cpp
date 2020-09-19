#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int q;
    cin>>q;
    
    while(q--){
        long long int x,a=1,b=1,res=0,c=1;
        cin>>x;
        while(c<=x){
            res++;
            a=2*a+(2*b)*(2*b);
            b=2*b;
            c+=a;
        }
        cout<<res<<endl;
    }
    //n*(n+1)/2 cell
    //x*2
}

// 1
//     2
// 1+1+(1+1)^2  6  
//     4
// 6+6+(2+2)^2  28

// 28+28+(4*4)^2

