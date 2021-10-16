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
int main(){

    double n,sum=0;
    cin>>n;
    double a;
    rep(i,0,n){
        cin>>a;
        //cout<<a[i];
        sum=sum+a;
        //cout<<sum;
    }
    double ans = sum/n;
    cout<<setprecision(12)<<fixed<<ans<<endl;
    return 0;
}
