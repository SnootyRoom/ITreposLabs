#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int a)
{
    int r, l, m;
    r = size - 1;
    l = 0;
    while (l <= r)
    {
        m = (r + l) / 2;
        if (arr[m] > a)
        {
            r = m;
        }
        else if (arr[m] < a)
        {
            l = m + 1;
        }
        else
        {
            break;
        }
    }
    return m;
}



int main()
{   
    int sizeA, a;
    int arr[5] {1, 2, 3, 4, 5};
    sizeA = size(arr);
    for (int i = 0; i < sizeA; i++) cout << arr[i] << " ";
    cout << endl;
    cout << "Input number: ";
    cin >> a;
    cout <<"Index = " << (binarySearch(arr, sizeA, a));
    return 0;
}

