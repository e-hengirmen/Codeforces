#include <iostream>
using namespace std;


int maxy(int a,int b){if(a>b)return a;return b;}

int main(){
    int q;
    cin>>q;
    while(q--){
        int n,N;  
        cin>>N; //N k
        n=2*N;  //n 2k
        int arr[n],control[N+1],arr2[N];
        for(int *i=control;i<control+N+1;i++){
            *i=1;
        }
        for(int *i=arr;i<arr+n;i++){
            cin>>*i;
        }

        for(int i=0,j=0;i<n;i++){
            if(control[arr[i]]){
                arr2[j]=arr[i];
                control[arr[i]]=0;
                j++;
            }
        }
        for(int i=0;i<N;i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;

    }
}