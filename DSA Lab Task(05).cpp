#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, key;
    int found = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    // Linear Search
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = i;
            break;
        }
    }

    // Display result
    if(found != -1)
    {
        cout << "Element found at position: " << found + 1;
    }
    else
    {
        cout << "Element not found in the array.";
    }

    return 0;
}
