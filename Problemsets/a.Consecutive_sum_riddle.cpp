#include <bits/stdc++.h>
using  namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        //cout<<"*";
        long long ans=0,test;
        cin>>test;
        ans=-(test-1);
        cout<<ans<<" "<<test<<endl;
    }
    return 0;
}
