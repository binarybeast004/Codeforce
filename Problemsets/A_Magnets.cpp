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
void solve() {
	int n;
    cin>>n;
	string x;
    cin>>x;
	int ans = 1;
	string c;
	rep(i,1,n) {
		cin >> c;
		if (x.compare(c) != 0) {
			ans++;
		}
		x = c;
	}
	cout << ans << '\n';
}
int main(){
    solve();
    return 0;
}
