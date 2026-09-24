#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";
    int data[n];
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    cout << "Now enter elements to search: ";
    int item;
    cin >> item;

    bool found = false;
    int location;

    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        cout << "  Low: " << low;
        cout << "  High: " << high;
        cout << "  Mid: " << mid << endl;

        if (item == data[mid])
        {
            found = true;
            location = mid;
            break;
        }
        else if (item < data[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (found == true)
    {
        cout << "Item found at location: " << location;
    }
    else
    {
        cout << "Item not found";
    }
    return 0;
}
