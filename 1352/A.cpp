#include <bits//stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin>>q;
    while(q--){
        int n,x[5],res=0;
        for(int *p=x;p<x+5;p++)*p=0;
        cin>>n;
        if(n==10000){cout<<1<<endl<<10000<<endl;continue;}
        for(int i=0;i<5;i++){
            x[i]=n%10;
            n=n/10;
            if(x[i])res++;
        }
        cout<<res<<endl;
        for(int i=0;i<5;i++){if(x[i])cout<<pow(10,i)*x[i]<<" ";}
        cout<<endl;
        
 
        
        
        
    }
    
}
