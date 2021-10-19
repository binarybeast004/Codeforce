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

    int n,a;
    cin>>n;
    rep(i,0,n){
        cin>>a;
        if(a==1){
            //cout<<"|";
            cout<<"0"<<endl;
            
        }
        else if(a==2){
            //cout<<"/";
            cout<<"0"<<endl;
            
        }
        else if(a%2==0){
            //cout<<"!";
            cout<<(a/2)-1<<endl;
            
        }
        else{
            //cout<<"&";
            cout<<((a/2))<<endl;
            
        }
    }
    return 0;
}
