#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long t,k,ans,i,a;
    const unsigned int div=1000000007;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>k;
        ans=1;
        k-=1;
        a=2;
        if(k>0){
            ans*=2;
            k-=1;
        }
        while(k>0){
            if(k%2==0){
                a=a*a;
                a%=div;
                k/=2;
            }
            else{
                ans*=a;
                ans%=div;
                k-=1;
            }
        }
        ans*=10;
        ans%=div;
        cout<<ans<<endl;
    }
    return 0;
}
