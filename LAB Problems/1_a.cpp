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

    int location;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (item == data[i])
        {
            found = true;
            location = i;
            break;
        }
    }
    if (found == true)
    {

        cout << "Item is found at index: " << location;
    }
    else
    {
        cout << "Item not found";
    }

    return 0;
}