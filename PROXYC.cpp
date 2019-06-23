#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,tot,ans;
    string s;
    cin>>t;
    for(int i=0;i<t;i++){
        tot=ans=0;
        cin>>n>>s;
        for(int j=0;j<n;j++){
            if(s[j]=='P')
                tot+=1;
            else{
                if(j!=0 && j!=1 && j!=n-2 && j!=n-1){
                    if((s[j-1]=='P' || s[j-2]=='P') && (s[j+1]=='P' || s[j+2]=='P'))
                        ans+=1;
                }
            }
        }

        if(tot>=0.75*n)
            cout<<0<<endl;
        else if(tot+ans >= 0.75*n)
            cout<<ceil((0.75)*n-tot)<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
