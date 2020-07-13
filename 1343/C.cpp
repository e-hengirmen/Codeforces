#include <bits//stdc++.h>
using namespace std;
 
long long sign(long long x){
    if(x>0)return 1;
    return 0;
}
 
int main()
{
    int q,n;
    cin>>q;
    for(int i0=0;i0<q;i0++){
        long long sum,x,signx;
        cin>>n;
        long long a[n];
        
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        sum=a[0];
        x=a[0];
        signx=sign(x);
        
        for(int i=1;i<n;i++){
            if(sign(a[i])!=signx){
                x=a[i];
                sum+=x;
                signx=!signx;
            }
            else if(a[i]>x){
                sum=sum-x+a[i];
                x=a[i];
            }
        }
        cout<<sum<<endl;
    }
          
       
        
}
