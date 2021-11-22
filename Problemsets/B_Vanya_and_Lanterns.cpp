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
    BOOST;
   
    int n,l;
    cin>>n>>l;
    int a[n];
    double mx=0;
    int temp=0;
    rep(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    mx=max(abs(0-a[0]), abs(l-a[n-1]));
    rep(i,0,n-1){
        temp=abs(a[i+1]-a[i]);
        double divide=temp/(double)2.0;
        //cout<<temp<<endl;
        mx=max(mx,divide);
        //cout<<"|"<<mx<<endl;
    }
    cout<<fixed<<setprecision(10)<<mx<<endl;
    return 0;
}
