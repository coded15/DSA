/**
 * Search an element in an array
You are given an array 
A
A of size 
N
N and an element 
X
X. Your task is to find whether the array 
A
A contains the element 
X
X or not.

Input Format
The first line contains two space-separated integers 
N
N and 
X
X — the size of array and the element to be searched.
The second line contains all the elements of array 
A
A
Output Format
Output "YES" if the element 
X
X is present in 
A
A, otherwise output "NO".

Constraints
1
≤
N
,
X
≤
10
5
1≤N,X≤10 
5
 
1
≤
A
i
≤
10
5
1≤A 
i
​
 ≤10 
5
 */
#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int* A = new int[n];
    while(n--)
    {
        int entry;
        cin >> entry;
        if (entry == x)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}