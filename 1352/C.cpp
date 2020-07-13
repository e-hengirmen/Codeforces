#include <bits//stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin>>q;
    while(q--){
        long n,k,modd,ort;
        cin>>n>>k;
        ort=k/(n-1);     //3 7   3
        modd=k%(n-1);    //1 
        if(modd){
            cout<<n*ort+modd<<endl;
        }
        else{
            cout<<n*ort+modd-1<<endl;
        }
    }
    
}
