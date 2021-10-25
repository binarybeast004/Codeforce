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
    int n;
    cin>>n;
    while (true){
        n=n+1;
        int a = n/1000;
        //cout<<a;
        int b = n/100 %10;
        //cout<<b;
        int c = n/10 %10;
        //cout<<c;
        int d = n %10; 
        //cout<<d;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<n;
            break;
        }
    }
    return 0;
}
