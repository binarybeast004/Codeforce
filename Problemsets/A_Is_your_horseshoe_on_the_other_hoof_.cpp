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
    LL int a[4];
    LL int cnt=1;
    rep(i,0,4){
        cin>>a[i];
        //cout<<a[i]<<endl;
    }
    sort(a,a+4);
    rep(i,0,3){
        if(a[i]==a[i+1]){
            cnt++;
        }
    }
    //cout<<cnt<<endl;
    cout<<cnt-1<<endl;
    return 0;
}
