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

    int n,s=0,k=0,total;
    cin>>n;
    int a[n];
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i,0,n){
        if(a[i]==1){
            s=s+1;
            }
        else if(a[i]==0){
            k=k+0;
        }
    }
    total=s+k;
    if(total>0){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    return 0;
}
