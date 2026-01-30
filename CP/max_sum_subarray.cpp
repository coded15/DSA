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
    int first_sum = 0;
    // dont get influenced by the test case and assume that the size of the subarray is k only
    for (int i = 0; i < k; i++)
    {
        first_sum += A[i];
    }
    max_sum = first_sum;
    for (int i = 0; i < n - k; i++)
    {
        max_sum = max(max_sum - A[i - 1] + A[i + k], max_sum);
    }
    cout << max_sum;
}