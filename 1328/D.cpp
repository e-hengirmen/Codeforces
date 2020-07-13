#include <bits//stdc++.h>
using namespace std;
 
int main()
{
    long long n,arr[210000],a,control,loc,control2,control3;
    cin>>n;
    for(int i0=0;i0<n;i0++){
        control3=0;
        control2=1;
        control=0;
        cin>>a;
        for(int i=0;i<a;i++)
            cin>>arr[i];
        
        for(int i=1;i<a;i++)
            if(arr[i]==arr[i-1]){
            control=1;
            loc=i;
            break;
        }
        if(arr[0]==arr[a-1])
            control3=1;
        
        
        for(int i=1;i<a;i++)
            if(arr[i]!=arr[i-1]){
            control2=0;
            break;
        }
            
        
        
        
        
        
        if(control2==1)
            cout<<1;
        else if(a%2==0)
            cout<<2;
            else{
            if(control)
                cout<<2;
            else if(control3)
            cout<<2;
            else
                cout<<3;
        }
            cout<<endl;
        
        
        
        
        
        
        if(control2==1){
            for(int i=0;i<a;i++)
            cout<<1<<" ";
        }
        else if(a%2==0){
            for(int i=0;i<a;i++){
            cout<<i%2+1<<" ";
            }
        }
        else{
            if(control){
                for(int i=0;i<loc;i++)
                                    cout<<i%2+1<<" ";
                                    cout<<(loc-1)%2+1<<" ";
                                for(int i=loc+1;i<a;i++)
                                    cout<<(i+1)%2+1<<" ";
            }
            else if(control3){
                                    cout<<1<<" ";
                                    for(int i=1;i<a-1;i++)
                            cout<<i%2+1<<" ";
                                cout<<1;
            }
            else{
                                for(int i=0;i<a-1;i++)
                            cout<<i%2+1<<" ";
                                    cout<<3;
            }
            
            
            
            
            
            
        }
        
        
        
        
        
        
        
        
        
        /*
                            else
                                for(int i=0;i<a-1;i++)
                            cout<<i%2+1<<" ";
                                
                       
                            else{
                                for(int i=0;i<loc;i++)
                                    cout<<i%2+1<<" ";
                                    cout<<(loc-1)%2+1<<" ";
                                for(int i=loc+1;i<a;i++)
                                    cout<<(i+1)%2+1<<" ";
                
                
                
                
            }
        }
    }
        
        
        
        
        
        
       
        */
        cout<<endl;
    }
        
}
