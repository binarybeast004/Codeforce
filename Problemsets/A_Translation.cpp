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

    string s,copy;
    cin>>s>>copy;
    reverse(s.begin(), s.end());
    if(s==copy){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
