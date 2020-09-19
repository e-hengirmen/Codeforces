#include <iostream>
#include <string>
using namespace std;

int main(){
    int q;
    cin>>q;

    while(q--){
        int n,x=1;
        cin>>n;
        string s;
        cin>>s;
        int odd1=0,even1=0,odd0=0,even0=0;
        for(char *c=&s[0];*c;c++){
            if(x){
                x=0;
                if((*c-'0')%2){
                    odd1++;
                }
                else{
                    even1++;
                }
            }
            else{
                x=1;
                if((*c-'0')%2){
                    odd0++;
                }
                else{
                    even0++;
                }
            }
        }

        if((odd1+odd0+even1+even0)%2){
            if(odd1){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            if(even0){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }







        
    }

}