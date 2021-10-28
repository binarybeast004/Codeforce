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

    int a,b,c;
    cin>>a>>b>>c;
    if(a==1 && c==1){
        cout<<a+b+c<<endl;
    }
    else if(a==1){
        cout<<(a+b)*c<<endl;
    }
    else if(b==1){
        if(a<c){
            cout<<(a+b)*c<<endl;
        }
        else{
            cout<<a*(b+c)<<endl;
        }
    }
    else if(c==1){
        cout<<a*(b+c)<<endl;
    }
    else{
        cout<<a*b*c<<endl;
    }
    return 0;
}
