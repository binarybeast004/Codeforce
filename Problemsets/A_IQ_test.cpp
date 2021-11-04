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
    cin>>t;
    int a[t];
    rep(i,0,t){
        cin>>a[i];
    }
    int store;
    int even=0,odd=0;
    rep(i,0,t){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    //cout<<even<<odd<<endl;
    if(even>odd){
        rep(i,0,t){
            if(a[i]%2!=0){
                store=i;
            }
        }
    }
    else {
        rep(i,0,t){
            if(a[i]%2==0){
                store=i;
            }
        }
    
    }
cout<<store+1<<endl;
return 0;
}
