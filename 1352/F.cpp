#include <bits//stdc++.h>
using namespace std;
 
void solve(int a,int b,int c,char x,char y){
    bool control=1;
    cout<<x;
    while(a--)cout<<x;
    if(b==0)return;
    cout<<y;
    b--;
    while(c--)cout<<y;
    while(b--){
        if(control)cout<<x;
        else cout<<y;
        control=!control;
    }
}
 
int main()
{
    int q;
    cin>>q;
    while(q--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>c)
        solve(a,b,c,'0','1');
        else
        solve(c,b,a,'1','0');
        cout<<endl;
    }
    
}
