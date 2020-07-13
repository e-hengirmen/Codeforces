#include <bits//stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin>>q;
    while(q--){
        int n,x=1,control,control2=1;
        cin>>n;
        control=n%4;
        if(n>3){
            int x;
            switch(control){
                case 0:for(x=2;x<n;x+=4){
                    cout<<x<<" "<<x+2<<" "<<x-1<<" "<<x+1<<" ";
                }
                break;
                case 1:for(x=2;x<n-1;x+=4){
                    cout<<x<<" "<<x+2<<" "<<x-1<<" "<<x+1<<" ";
                }
                cout<<x-1;
                break;
                case 2:for(x=2;x<n-6;x+=4){
                    cout<<x<<" "<<x+2<<" "<<x-1<<" "<<x+1<<" ";
                }
                x--;
                cout<<x<<" "<<x+2<<" "<<x+4<<" "<<x+1<<" "<<x+5<<" "<<x+3<<" ";
                break;
                case 3:for(x=2;x<n-7;x+=4){
                    cout<<x<<" "<<x+2<<" "<<x-1<<" "<<x+1<<" ";
                }
                x--;
                cout<<x<<" "<<x+2<<" "<<x+4<<" "<<x+1<<" "<<x+5<<" "<<x+3<<" "<<x+6;
                break;
            }
                
        }
        else
        cout<<-1;
       // 2 4 1 3   5        
        // 1 3 5 2 6 4 
        //1 3 5 2 6 4 7
        cout<<endl;
    }
}
