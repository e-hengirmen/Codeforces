#include <bits//stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin>>q;
    while(q--){
       long n,k,ort,modd;
        cin>>n>>k;
        if(k==1){cout<<"YES"<<endl<<n<<endl;continue;}
        if(n<k||n==k+1){cout<<"NO"<<endl;continue;}
        if(n%2==1){
            if(k%2==1){
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)cout<<1<<" ";
                cout<<n-k+1<<endl;
                continue;
            }
            else{cout<<"NO"<<endl;continue;}
        }
        else{
            if(k%2==1){
                if(n<2*k){cout<<"NO"<<endl;continue;}
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)cout<<2<<" ";
                cout<<n-2*k+2<<endl;
                continue;
                
            }
            else{
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)cout<<1<<" ";
                cout<<n-k+1<<endl;
                continue;
                
            }
        }
        
    }
    
}
