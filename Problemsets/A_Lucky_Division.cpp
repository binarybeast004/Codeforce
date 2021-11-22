//----------------------------------------------------------------------//
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
    if(n%4==0 or n%7==0){
        cout<<"YES"<<endl;
    }
    else if(n%47==0 or n%44==0){
        cout<<"YES"<<endl;
    }
    else if(n%77==0 or n%74==0){
        cout<<"YES"<<endl;
    }
     else if(n%474==0 or n%447==0){
        cout<<"YES"<<endl;
    }
     else if(n%477==0 or n%444==0){
        cout<<"YES"<<endl;
    }
    else if(n%774==0 or n%747==0){
        cout<<"YES"<<endl;
    }
    else if(n%777==0 or n%744==0){
        cout<<"YES"<<endl;
    }
    else {
    cout<<"NO"<<endl;
    }
    return 0;
}