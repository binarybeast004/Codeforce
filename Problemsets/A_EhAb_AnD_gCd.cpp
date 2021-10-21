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
        int n;
        cin>>n;
        //There is no need to create loop. I use here only for learnid issue
        if(n%2==0){
            //int gcd=__gcd(n,n-1);
            //int lcm=((n*(n-1))/gcd);
            cout<<n-(n-1)<<" "<<n-1<<endl;
        }
        else if(n%2!=0){
            //int gcd=__gcd(((n-1)/2),(n-1));
            //int lcm=((((n-1)/2)*(n-1))/gcd);
            cout<<n-(n-1)<<" "<<n-1<<endl;
        }
    }
    return 0;
}
