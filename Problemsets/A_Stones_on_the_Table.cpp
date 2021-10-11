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
#define rep(i,k,n)  for(int i=k; i<n; i++)
#define FOR(i,n)    for(int i=0;i<n;i++)
int main(){
    int n,count=0;
    string b;
    //cout<<"Input N";
    cin>>n>>b;
    rep(i,0,n){
        if(b[i]==b[i+1]){
            count=count+1;
            //cout<<"if con"<<endl;
            //cout<<count;
        }
        //cout<<"for loop"<<count<<endl;
    }
    cout<<count<<endl;



    return 0;
}