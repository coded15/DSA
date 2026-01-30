#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

bool checkDistinctSubarray(queue<int> A, int k)
{
    // although I have created a deep copy queue in q below but it's not needed since the copy constructor will already create a deep copy when the queue is passed in the funciton parameter like that
    queue<int> q = A;
    unordered_map<int, int> temp;
    for (int i = 0; i < k; i++)
    {
        // just doing temp[A.front()]++; is not logically correct unless you also pop the first element
        // initially I was doing temp.emplace(A.front()) but it is not correct, since a map needs you to intialize both a key and a value.
        temp[q.front()]++;
        q.pop();
    }
    return temp.size() == k;
}

int findSum(queue<int> A, int k)
{
    int sum = 0;
    while (k--)
    {
        // sum += A.pop() will not do anything since pop returns void
        sum += A.front();
        A.pop();
    }
    // forgot to return sum
    return sum;
}

int main()
{
    int n, k;
    cin >> n >> k;
    queue<int> A;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push(x);
    }
    int max_sum = 0;
    while (A.size() >= k)
    {
        // check distint subarray by checkDistinctSubarray(A.front, k);
        // if yes or even no
        if (checkDistinctSubarray(A, k))
        {
            max_sum = max(max_sum, (findSum(A, k)));
        }
        // A.pop() needs to be outside this "if" condition so that infinite loop doesnt happen
        A.pop();
    }
    cout << max_sum;
}
