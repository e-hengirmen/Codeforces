#include <bits//stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin>>q;
    while(q--){
        int n,alice=0,tony=0,size=0,control,moves=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int *pfirst=a,*plast=a+n-1;
        
        
        while(pfirst<=plast){
            if(moves%2==0){
            for(control=0;control<=size&&pfirst<=plast;pfirst++){
                control+=*pfirst;
            }
            alice+=control;
            size=control;
                moves++;}
            else{
            for(control=0;control<=size&&pfirst<=plast;plast--){
                control+=*plast;
            }
            tony+=control;
            size=control;
                moves++;}
        }
        cout<<moves<<" "<<alice<<" "<<tony<<endl;
        
        
        
        
    }
    
}
