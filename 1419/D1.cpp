#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2){
        cout<<n/2<<endl;
    }
    else{
        cout<<n/2-1<<endl;
    }
    long long int a[n];
    for(long long int *i=a;i<a+n;i++)cin>>*i;
    sort(a,a+n);

    long long int *p1,*p0=a;
    if(n%2){
        p1=a+n/2;
        int temp=1;
        while(n--){
            if(temp){
                cout<<*p1<<" ";
                p1++;
                temp=0;
            }
            else{
                cout<<*p0<<" ";
                p0++;
                temp=1;
            }
        }
    }
    else{
        cout<<*(a+n/2-1)<<" "<<*(a+n/2)<<" ";
        p1=a+n/2+1;

        n-=2;
        int temp=0;
        while(n--){
            if(temp){
                cout<<*p1<<" ";
                p1++;
                temp=0;
            }
            else{
                cout<<*p0<<" ";
                p0++;
                temp=1;
            }
        }


    }

// 5   0 1 2   3 4 5   (n-1)/2
// 4   0       1 2 3  (n-1)/2



}
    