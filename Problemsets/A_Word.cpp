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

    string a;
    cin>>a;
    int lowcase=0;
    int upcase=0;
    rep(i, 0, a.length()){
        if(isupper(a[i])){
            upcase++;
        }
        else {
            lowcase++;
        }
    }
   
    if(lowcase>=upcase){
        char c;
        rep(i,0,a.length()){
            c=tolower(a[i]);
            cout<<c;
        }
    }
    else{
        char c;
        rep(i,0,a.length()){
        c=toupper(a[i]);
        cout<<c;
        }
       
    }
    return 0;
}
