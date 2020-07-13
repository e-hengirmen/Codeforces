#include <bits//stdc++.h>
using namespace std;
 
int main()
{
    int q,n,x;
    cin>>q;
    
    for(int i=0;i<q;i++){        //((2^k)-1)*x
        x=3;
        cin>>n;
        while(n%x){
            x=2*x+1;
        }
        cout<<n/x<<endl;
    }
        
}
