#include <bits//stdc++.h>
using namespace std;
 
int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%4){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int j=2;j<=x;j+=2){
                cout<<j<<" ";
            }
            for(int j=1;j<=x-3;j+=2){
                cout<<j<<" ";
            }
            cout<<x-1+x/2<<endl;
        }
    }
        
}
