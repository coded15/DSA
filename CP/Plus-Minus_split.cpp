// https://www.codechef.com/problems/PSAS?tab=statement
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
        std::vector<int> A;
        std::unordered_map<int, int> count_num;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            A.push_back(x);
            count_num[x]++;
        }
        // count_num.count() wont work, count function counts the number of occurences of a key.
        if (count_num.size() == 0 || count_num.size() == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            count_num.clear();
            for (int j = 0; j < n; j++)
            {
                if (j < i)
                {
                    count_num[A[j] + A[i]]++;
                }
                if (j >= i)
                {
                    count_num[A[j] - A[i]]++;
                }
                // Below is not correct because you are modifying the original array itself
                //  if (j < i)
                // {
                //     A[j] += A[i];
                // }
                // if (j >= i)
                // {
                //     A[j] -= A[i];
                // }
                // count_num[A[j]]++;
            }
            if (count_num.size() == 1)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (count_num.size() != 1)
        {
            cout << "NO" << endl;
        }
    }
}