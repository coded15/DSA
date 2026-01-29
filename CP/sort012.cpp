#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of elements in the array: ";
    int size;
    cin >> size;
    int *input = new int[size];
    int count_1=0, count_2=0, count_0 = 0;
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            count_1++;
        }
        else if (n == 2)
        {
            count_2++;
        }
        else
        {
            count_0++;
        }
        input[i] = n;
    }
    int i = 0;
    for (int j = 0; j < count_0; j++, i++)
    {
        input[i] = 0;
    }
    for (int j = 0; j < count_1; j++, i++)
    {
        input[i] = 1;
    }
    for (int j = 0; j < count_2; j++, i++)
    {
        input[i] = 2;
    }
    for(int j = 0; j < size; j++)
    {
        cout << input[j] << " ";
    }
}