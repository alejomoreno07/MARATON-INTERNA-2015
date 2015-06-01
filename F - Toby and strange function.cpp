#include <bits/stdc++.h>
using namespace std;


string s,ans;
int t;
long long int n;

void solver(){
    ans="";
    long long int nprim=n%s.size();
    long long int start=s.size()-nprim;
    for(long long int i=start;i<s.size();i++){
        ans=ans+s.at(i);
    }
    for(long long int i=0;i<start;i++){
        ans=ans+s.at(i);
    }
    cout<<ans<<endl;
}

void start(){
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        cin>>s;
        solver();
    }
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    start();
    return 0;
}
