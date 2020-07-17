#include <iostream>
using namespace std;


int maxy(int a,int b){if(a>b)return a;return b;}

int main(){
    int q;
    cin>>q;
    while(q--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x!=y&&x!=z&&y!=z){
            cout<<"NO"<<endl;
            continue;
        }
        else if(x==y&&x==z){
            cout<<"YES"<<endl<<x<<" "<<x<<" "<<x<<endl;
        }
        else{
            int k=maxy(maxy(x,y),z),control=0,diff;
            if(k==x)control++;
            else diff=x;
            if(k==y)control++;
            else diff=y;
            if(k==z)control++;
            else diff=z;
            if(control==2)cout<<"YES"<<endl<<diff<<" "<<diff<<" "<<k<<endl;
            else cout<<"NO"<<endl;
            
        }

    }
//ab ac bc
}