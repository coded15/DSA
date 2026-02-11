#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int loss = INT_MIN;
        int all_win_coins = 0;
        // mind the brackets bro... int[n] not int(n)
        int *A = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            all_win_coins += A[i];
        }
        for (int i = 0; i < n; i++)
        {
            int loss_money;
            cin >> loss_money;
            loss = max(loss, loss_money - A[i]);
        }
        cout << all_win_coins + loss << endl;
    }
}