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

    int n,exit=0,max=0,enter=0,possible=0,intrain=0;
    cin>>n;

    rep(i,0,n){
        cin>>exit>>enter;
        intrain=intrain-exit;
        intrain=intrain+enter;
        //cout<<(intrain); 
        if(intrain>max){
            intrain=max;
        }
        //cout<<(intrain);
    }
    cout<<abs(intrain);
    return 0;
}
