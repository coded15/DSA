#include <iostream>
using namespace std;
// I am right about the fact that no additional array will be needed, but the logic is quite wrong.
// I agree that that the values at the terminal will contribute the least to average of sum of triplets from a permutation. But understand the distribution it's more of like the 1x(extreme) + 2x(second extreme) + 3x(middle values), so in the very beginning placing the second largest number of permutation in the second extreme is not right, it should be placed at the extreme
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        if (n >= 6)
        {
            cout << n - 1 << " " << n - 2 << " ";
            for (int i = 1; i <= n - 3; i++)
            {
                cout << i << " ";
            }
            cout << n << " ";
        }
        else
            cout << 3 << " " << 2 << " " << 1;
        cout << endl;
    }
}
