#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long t,n,ans,m,i,j;
    cin>>t;
    for(i=0;i<t;i++){
        ans=0;
        cin>>n;
        m=n;
        for(j=0;n>0;j++){
            ans+=n%10;
            n/=10;
        }
        for(j=0;j<=9;j++){
            if((ans+j)%10==0){
                m=m*10+j;
                break;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
