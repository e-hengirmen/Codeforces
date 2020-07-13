#include <bits//stdc++.h>
using namespace std;
 
int main()
{
    int n,count=0;
    long long sol,sag;
    cin>>n;
    long long a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    
    for(int i=0;i<n;i++){
        for(long long i0=2;i0<=a[i];i0++)
        if(b[i]<=i0*(i0-1)/2){
        sol=a[i]-i0;
        sag=a[i]-(b[i]-(i0-1)*(i0-2)/2);
        break;
        }
        
        for(int i0=0;i0<a[i];i0++){
            if(i0==sol)
            cout<<"b";
            else if(i0==sag)
            cout<<"b";
            else
            cout<<"a";
        }
        cout<<endl;
    
        
    }
    
}
