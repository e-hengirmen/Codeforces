#include <iostream>
#include <cmath>
 
 
using namespace std;
 
 
 
 
int main(){
    int q;
    cin>>q;
    while(q--){
        long long int n,res=0;
        cin>>n;
        long long int a[n];
        for(long long int *i=a;i<n+a;i++)cin>>*i;
        for(long long int *i=a+1;i<n+a;i++){
            if(*i<*(i-1))res+=*(i-1)-*i;
        }
 
 
 
 
 
 
 
 
        cout<<res<<endl;
    }
    
 
}
 
 
//omkar starts from right to left
//left is higher 
//nondecreasing
