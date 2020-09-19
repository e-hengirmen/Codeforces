#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int q;
    cin>>q;
    
    while(q--){
        int n,x,big=0,small=0,even=0,temp,sum=0;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp==x)even++;
            else if(temp>x)big++;
            else small++;
            sum+=temp;
        }



        if(even==n){
            cout<<0<<endl;
        }
        else if(even){
            cout<<1<<endl;
        }
        else{
            if(sum==n*x){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }





    }
}