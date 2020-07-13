#include <bits//stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    long long a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    
    
    for(int i=0;i<n;i++){
        if(a[i]%b[i]==0)
            cout<<0<<endl;
        else
        cout<<b[i]-a[i]%b[i]<<endl;
    }




}
