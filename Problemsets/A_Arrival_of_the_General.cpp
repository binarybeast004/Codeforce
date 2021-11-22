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
BOOST;
    int n,min=101,max=0,x=0,y=0,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
            x=i;
 
        }
    }
      for(int i=x;i>0;i--)
    {
        swap(a[i],a[i-1]);
    }
    s=s+x;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
            y=i;
        }
    }
    s=s+n-y-1;
    cout<<s;
    
    return 0;
}