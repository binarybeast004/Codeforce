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
   string s;  
   cin>>s;
   sort(s.begin(),s.end());
//    rep(i,0,s.size()){
//        cout<<s[i]<<"|"<<endl;
//    }
   rep(i,0,s.size()){
       if(s[i]!='+') {
           if(i==s.size()-1){
               cout<<s[i];

            } 
             else{
             cout<<s[i]<<"+";
             }
       }
   } 
    return 0;
}
