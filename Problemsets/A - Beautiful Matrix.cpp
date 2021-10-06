// ---------------------------------------------------------------------//
//                           Assalamualaikum                            //
//             American International University Bangladesh             //
//                            Binarybeast004                            //
// ---------------------------------------------------------------------//
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0;
    //i (1-5)
    for (int i = 1; i <= 5; ++i)
    {
        //j (1-5)
        for (int j = 1; j <= 5; ++j)
        {
            cin >> a;
            //condition
            if (a == 1)
            {
             
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
    return 0;
}
