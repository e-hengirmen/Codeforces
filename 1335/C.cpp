#include <bits//stdc++.h>
using namespace std;
 
int main()
{
    int q,n,arr[200001],*arr_limit,x,unique,maxy;
    arr_limit=arr+200000;
    cin>>q;
    for(int i=0;i<q;i++){
        maxy=0;
        unique=0;
        cin>>n;
        for(int *i1=arr;i1<=arr_limit;i1++){
            *i1=0;
        }
        for(int i1=0;i1<n;i1++){
            cin>>x;
            arr[x]++;
            maxy=max(maxy,arr[x]);
            if(arr[x]==1)
                unique++;
        }
        
        if(maxy>unique){
            cout<<unique;
        }
        else{
            if(maxy==unique)
                cout<<unique-1;
            else
                cout<<maxy;
        }
        cout<<endl;
        
        
        
        
    }
    
    
    
    
}
