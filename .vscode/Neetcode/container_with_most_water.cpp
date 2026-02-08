#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *heights = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int current_volm = 0;
        for (int j = i + 1; j < n; j++)
        {
            current_volm = (j - i) * min(heights[i], heights[j]);
            res = max(res, current_volm);
        }
    }
    cout << res;
}