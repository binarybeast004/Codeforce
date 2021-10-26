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

    string s;
    cin>>s;
    bool flag = false;
    rep(i,0,s.length()){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            // cout<<"YES"<<endl;
            flag=true;
            break;
        }
        // if(s[i]!='H'||s[i]!='Q'||s[i]!='9') {
        //     //cout<<"NO"<<endl;
        //     break;
        // }
        
       
    }
    if(flag){
            cout<<"YES"<<endl;
        }
    else{
        cout<<"NO"<<endl;
    }
    //cout<<s;
    return 0;
}
