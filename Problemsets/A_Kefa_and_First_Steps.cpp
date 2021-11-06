// ---------------------------------------------------------------------//
//                           Assalamualaikum                            //
//             American International University Bangladesh             //
//                            Binarybeast004                            //
// ---------------------------------------------------------------------//
#include <bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define LL          long long
#define FOR(i,n)    for(int i=0;i<n;i++)
#define rep(i,k,n)  for(int i=k; i<n; i++)
#define repp(i,k,n) for(int i=k; i<=n; i++)

int main(){

    int t;
    int cnt=1;
    int result=0;
    cin>>t;
    LL int a[t];
    rep(i,0,t){
        cin>>a[i];
    }
    rep(i,0,t-1){
        if(a[i]==a[i+1]){
            cnt++;
            result=max(result,cnt);
            //cout<<cnt<<"|"<<result<<endl;
        }
        else if(a[i]<a[i+1]){
            cnt++;
            result=max(result,cnt);
            //cout<<cnt<<"||"<<result<<endl;
        }
        else {
           cnt=1;
           result=max(result,cnt);
           //cout<<cnt<<"|||"<<result<<endl;
        }
    }
    if(t<2){
        result=1;
    }
    cout<<result<<endl;
    return 0;
}
