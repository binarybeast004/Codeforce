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

    int n, points;
    cin >> n >> points;
    int min(points), max(points), amazing(0);
    while(n--)
    {
        cin >> points;
        if (points < min)
        {
            min = points;
            amazing++;
        }
        if (points > max)
        {
            max = points;
            amazing++;
        }
    }
    cout << amazing << endl;
    return 0;
}
