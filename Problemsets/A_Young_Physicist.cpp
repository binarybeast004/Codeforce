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

    int t,a;
    LL int xx=0,yy=0,zz=0;
    cin>>t;
    rep(i,0,t){
        int x,y,z;
        cin>>x>>y>>z;
        xx=xx+x;
        yy=yy+y;
        zz=zz+z;
        
    }
    //cout<<store<<endl;
    if(xx==0 && yy==0 && zz==0){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
