#include <bits/stdc++.h>
using namespace std;


int m,n;

unsigned long long int bigmod(int b,int p,int m){
    unsigned long long int mask=1;
    unsigned long long int pow2=b%m;
    unsigned long long int r=1;
    while(mask){
        if(p&mask) r=(r*pow2)%m;
        pow2=(pow2*pow2)%m;
        mask<<=1;
    }
    return r;
}


void start(){
    while(cin>>m>>n){
        if(m==-1 && n==-1) return;
        long long int ans=0;
        ans=bigmod(2,m,1000007);
        ans*=(bigmod(2,n-m+1,1000007)-1);
        
        cout<<ans%1000007<<endl;
    }
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    start();
    return 0;
}