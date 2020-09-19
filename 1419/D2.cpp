#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

# define ll long long int

int main(){
    int n;
    cin>>n;

    ll a[n];
    for(ll *i=a;i<a+n;i++)cin>>*i;
    sort(a,a+n);

    ll *p,second=0,third=1;
    ll num,fourth,first;
    if(n%2){
        fourth=n-n/2;
        num=*(p=a+n/2);
        first=n/2;
    }
    else{
        fourth=n-n/2+1;
        num=*(p=a+n/2-1);
        first=n/2-1;
    }

    for(ll *i=a;i<p;i++){
        if(*i==num)second++;
    }
    for(ll *i=p+1;i<a+n;i++){
        if(*i==num)third++;
    }
    fourth=fourth-third;
    first=first-second;

// 1 2 3 4 4 4 4 4 4    4 4 4 4 4 4 4 5 6 7
// 4 1 4 2 4 3 4 5 4    6 4 7 4 4 4 4 4 4 4


    fourth=fourth-1;
    if(fourth<0)fourth=0;

    cout<<first+min(fourth,second)<<endl;

    // if(n%2){
    //     cout<<n/2-neg<<endl;
    // }
    // else{
    //     cout<<n/2-1-neg<<endl;
    // }




    ll *p1,*p0=a;
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
    