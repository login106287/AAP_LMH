        #include <bits/stdc++.h>

        using namespace std;

        int main()
        {
            long long n;
            cin >> n;
            string ans = "l want";
            while ( n > 0)
            {
                ans = ans + "!";
                n-=1;

            }
            cout << ans;
            return 0;
        }
