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
    rep(i,0,t)
    {
        long long int a, b,c,d,r;
        cin>>a>>b;
        if(a%b==0)
        r=0;
        else if(a>b)
        {
            d=a/b;
            c=b*(d+1);
            r=c-a;
        }
        else
        {
            r=b-a;
        }
 
        cout<<r<<endl;
    }
    return 0;
}
