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

    int a;
    int n;
    cin>>a>>n;
    rep(i,0,n){
        if(a%10==0){
        a=a/10;
        }
        else{
            a=a-1;
        }
    }
    cout<<a;
    return 0;
}
