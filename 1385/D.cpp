#include <iostream>
#include <cstring>
#include <cmath>
#include <climits>
using namespace std;


int help(char *str,int n,char c){
    int left=0,right=0,sleft,sright;
    if(n==1){
        if(*str==c)return 0;
        return 1;
    }

    for(char *i=str;i<str+n/2;i++)if(*i!=c)left++;
    for(char *i=str+n/2;i<str+n;i++)if(*i!=c)right++;

    sleft=help(str,n/2,c+1);
    sright=help(str+n/2,n/2,c+1);
    return min(left+sright,right+sleft);
}


int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        cout<<help(&str[0],n,'a')<<endl;
    }

}


