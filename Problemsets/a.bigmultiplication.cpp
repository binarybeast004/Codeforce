// ---------------------------------------------------------------------//
//                           Assalamualaikum                            //
//             American International University Bangladesh             //
//                            Binarybeast004                            //
// ---------------------------------------------------------------------//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    //cout<<"input T"<<endl;
    cin>>t;
    for(int i=0; i<t; i++){
       string m,n;
       long long a=0;
       long long b=0;
       cin>>m>>n;
       for(int i=0; i<m.length(); i++){
           a=a+m[i];
           //cout<<a;
       }
       for(int j=0; j<n.length(); j++){
           b=b+n[j];
           //cout<<b;
       }
       cout<<((a%3)*(b%3))%3<<endl;
    }

   return 0 ;
}
