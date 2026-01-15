#include <iostream>
using namespace std;

void merge(int *input, int low, int mid, int high)
{
    int *auxArray = new int[high + 1];
    int k = 0, i = low, j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (input[i] <= input[j])
        {
            auxArray[k++] = input[i++];
        }
        else
        {
            auxArray[k++] = input[j++];
        }
    }
    while (i <= mid)
    {
        auxArray[k++] = input[i++];
    }
    while (j <= high)
    {
        auxArray[k++] = input[j++];
    }
    input = auxArray;
}

void mergeSort(int *input, int low, int high)
{
    int mid = (low + high) / 2;
    mergeSort(input, low, mid);
    mergeSort(input, mid + 1, high);
    merge(input, low, mid, high);
}

int main()
{
    cout << "Enter array size: " << endl;
    int size;
    cin >> size;
    int *input = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    mergeSort(input, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << input[i] << "";
    }
    return 0;
}
