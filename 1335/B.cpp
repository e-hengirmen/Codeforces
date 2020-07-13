#include <bits//stdc++.h>
using namespace std;
 
int main()
{
    long long q;
    char c;
    cin>>q;
    long long n[q],a[q],b[q];
    for(long long i=0;i<q;i++){
        cin>>n[i]>>a[i]>>b[i];
    }
    
    for(long long i=0;i<q;i++){
        c='a';
        for(int i1=0;i1<n[i];i1++){
            cout<<c;
            c++;
            if(c=='a'+b[i])
                c='a';
        }
        cout<<endl;
    }
    
    
}
