#include <bits/stdc++.h>
using namespace std;

long long int k;



void solver(){
    long long int ans=2;
    if(k>=1 && k<=7){
        cout<<0<<endl;
        return;
    }
    if(k>7 && k<=48){
        cout<<1<<endl;
        return;
    }
    unsigned long long int prev=6,temporal;
    unsigned long long int curr=35;
    while(curr<=k){
        
        temporal=curr;
        curr=6*curr-prev;
        prev=temporal;
        if((0.5)*(log10(2)+2*log10(curr))>log10(k)) break;
        ans++;
        
    }
    cout<<ans<<endl;
}


void start(){
    while(cin>>k && k){
        solver();
    }
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    start();
    return 0;
}