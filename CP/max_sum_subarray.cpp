#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int *A = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int max_sum = INT_MIN;
    for (int i = 0; i < n - k; i++)
    {
        max_sum = max((A[i] + A[i + 1] + A[i + 2]), max_sum);
    }
    cout << max_sum;
}