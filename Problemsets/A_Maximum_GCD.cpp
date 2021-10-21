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

    int t;
    cin>>t;
    rep(i,0,t){
        int n,n1,n2;
        cin>>n;
        if(n%2==0){
            n1=n;
            n2=n/2;
            cout<<__gcd(n1,n2)<<endl;

        }
        else if(n%2!=0){
            n1=(n-1)/2;
            n2=(n-1);
            cout<<__gcd(n1,n2)<<endl;
        }
    }
    return 0;
}
