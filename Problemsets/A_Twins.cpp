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

   int t;
   cin>>t;
   int a[t];
   int s=0,c=0,sum=0;
   rep(i,0,t){
       cin>>a[i];
       s=s+a[i];
   }
   sort(a,a+t);
//    rep(i,0,t){
//        cout<<a[i]<<endl;
//    }
  for(int i=t-1;i>=0;i--){
       sum=sum+a[i];
       c++;
       if(sum>(s/2)){
           break;
       }
   }
   cout<<c<<endl;
    return 0;
}
