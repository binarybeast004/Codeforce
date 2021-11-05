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
    int cnt=1;
    sort(s.begin(),s.end());
    rep(i,0,s.length()-1){
        if(s[i]!=s[i+1]){
            cnt++;
        }
    }
    //cout<<cnt<<endl;
    if(cnt%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}

/*
string s;
    cin>>s;
    int a=0,b=0;
    rep(i,0,s.length()){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            a++;
        }
        else {
            b++;
        }
    }
    if(a>=0){
            cout<<"CHAT WITH HER!"<<endl;
        }
        else{
            cout<<"IGNORE HIM!"<<endl;
        }
    
*/