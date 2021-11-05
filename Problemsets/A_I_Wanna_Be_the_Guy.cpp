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

    int n,p,q;
    cin>>n;
    int a[200];
    cin>>p;
    rep(i,0,p){
        cin>>a[i];
    }
    cin>>q;
    rep(i,p,p+q){
        cin>>a[i];
    }
    if((p+q)>=n){
        repp(i,1,n)
        {
            int c=0;
            rep(j,0,p+q)
            {
                if(a[j]==i)
                {
                    c++;
                    break;
                }
            }
            if(c==0)
            {
                cout << "Oh, my keyboard!";
                return 0;
            }
        }
        cout << "I become the guy.";
    }
    else {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}

