#include <iostream>
#include <cmath>
 
 
 
using namespace std;
 
int main(){
    int q;
    cin>>q;
    while(q--){
        long long int n,maxy,miny,tmp_max;
        long long int k;
        cin>>n>>k;
        long long int a[n];
        cin>>*a;
        maxy=*a;
        miny=maxy;
        for(long long int *i=a+1;i<a+n;i++){
            cin>>*i;
            if(maxy<*i)maxy=*i;
            if(miny>*i)miny=*i;
        }
 
        tmp_max=maxy;
        maxy=maxy-miny;
 
        k--;
        for(long long int *i=a;i<a+n;i++){
            *i=tmp_max-*i;
        }
 
        if(k%2){
            for(long long int *i=a;i<a+n;i++){
            *i=maxy-*i;
            }
        }
 
 
        for(long long int *i=a;i<a+n;i++)cout<<*i<<" ";
        cout<<endl;
    }
 
    
 
}
 
 
//do one time
//and its the same after that every 2x times