#include <iostream>
#include <cmath>


using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int n,maxy,check=1,b;
        cin>>n;
        int a[n];
        cin>>maxy;
        for(int i=1;i<n;i++){
            cin>>b;
            if(b!=maxy){
                
                check=0;
            }
        }

        if(check)cout<<n<<endl;
        else cout<<1<<endl;
    }
    

}