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

bool isPrime(LL int  n) {
    if (n == 1 || (n % 2 == 0 && n > 2))
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int main(){
    LL int n;
	cin >> n;
    rep(i,0,n){
        LL int a;
        cin >> a;
 
        if(a == 1){
            cout << "NO" << '\n';
        } else{
            LL int x = sqrt(a);
            if(a == x * x && isPrime(x)){
            cout << "YES" << '\n';
        } else{
            cout << "NO" << '\n';
        }
        }
    }
    

    return 0;
}

