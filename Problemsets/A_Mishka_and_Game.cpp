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

    int n, s=0, t=0;
	cin>>n;
	int m[n], c[n];
	
	rep(i,0,n)
	{
		cin>>m[i]>>c[i];
		if(m[i]>c[i]) s++;
		else if(m[i]<c[i]) t++;
	}
	
	if(s>t) cout<<"Mishka";
	else if(s==t) cout<<"Friendship is magic!^^";
	else cout<<"Chris";
    return 0;
}
