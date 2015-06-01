#include <bits/stdc++.h>
using namespace std;



long long int s;


void start(){
    while(cin>>s){
        if(s==0) return;
        long long int n=(sqrt(2*s));
        long long int result=(n*(n+1))/2;
        if(result<=s){
            n++;
            result=result=(n*(n+1))/2;
        }
        cout<<result-s<<" "<<n<<endl;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    start();
    return 0;
}
