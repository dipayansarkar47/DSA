#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 5, 7, 3, 6, 8, 2, 3, 5};

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {

                if (element + arr[j] + arr[k] == 9)
                {
                    cout << element << "," << arr[j] << "," << arr[k] << endl;
                }
            }
        }
    }
    return 0;
}