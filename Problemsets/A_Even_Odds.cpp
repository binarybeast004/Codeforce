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

    LL int n,k,mid;
    cin>>n>>k;
    //n=10
    //1 3 5 7 9 2 4 6 8 10
    if(n%2==0){
        mid=(n/2);
    }
    else{
        mid=(n/2)+1;
    }
    if(k<=mid){
        cout<<(2*k)-1<<endl;
    }
    else {
        cout<<(k-mid)*2<<endl;
    }
    return 0;
}
