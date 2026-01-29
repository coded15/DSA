#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int* A = new int[n];
    int* B = new int[m];
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    int* result = new int[n+m];
    int i = 0, j = 0, k = 0;
    for(; i < n && j < m; k++)
    {
        if(A[i]<=B[j])
        {
            result[k] = A[i++];
        }
        else
        {
            result[k] = B[j++];
        }
    }
    while(i<n)
    {
        result[k++]=A[i++];
    }
    while(j<m)
    {
        result[k++]=B[j++];
    }
    for(int l = 0; l < n+m; l++)
    {
        cout << result[l] << " ";
    }
}