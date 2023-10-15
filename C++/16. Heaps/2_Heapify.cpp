#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int index = i;
    int leftIndex = 2 * i;
    int rightIndex = 2 * i + 1;
    int largest = index;

    if (leftIndex < n && arr[largest] < arr[leftIndex])
    {
        largest = leftIndex;
    }
    if (rightIndex < n && arr[largest] < arr[rightIndex])
    {
        largest = rightIndex;
    }
    if (index != largest)
    {
        swap(arr[index], arr[largest]);
        index = largest;
        heapify(arr, n, index);
    }
}

int main()
{
    
    return 0;
}