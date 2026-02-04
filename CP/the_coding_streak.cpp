#include <iostream>
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
        int max_streak = 0;
        int current_streak = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x >= 1)
            {
                max_streak = max(max_streak, ++current_streak);
            }
            else
                current_streak = 0;
        }
        cout << max_streak << endl;
    }
}
