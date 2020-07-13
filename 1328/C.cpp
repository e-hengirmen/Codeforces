#include <bits//stdc++.h>
using namespace std;
 
int main()
{
    int n,control1;
    cin>>n;
    string str[n];
    long long dig[n];
    for(int i=0;i<n;i++)
        cin>>dig[i]>>str[i];
    
    for(int i=0;i<n;i++){
        control1=1;
        for(int i0=0;i0<dig[i];i0++){
            if(str[i][i0]=='2'){
                if(control1)
                cout<<1;
                else
                    cout<<0;
                
            }
            else if(str[i][i0]=='0')
                cout<<0;
                else{
                if(control1){
                    cout<<1;
                    control1=0;
                }
                else
                    cout<<0;
                    
            }
            
        }
        cout<<endl;
        control1=1;
        for(int i0=0;i0<dig[i];i0++){
            if(str[i][i0]=='2'){
                if(control1)
                cout<<1;
                else
                    cout<<2;
                
            }
            else if(str[i][i0]=='0')
                cout<<0;
                else{
                if(control1){
                    cout<<0;
                    control1=0;
                }
                else
                    cout<<1;
                    
            }
        }
        
        cout<<endl;
    }
        
    
    
    
    
}
