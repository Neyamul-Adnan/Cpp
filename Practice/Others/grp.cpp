#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int data[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    int item;
    cout << "Enter item to search: ";
    cin >> item;

    bool found = false;
    int loc = 0;

    for (int i = 0; i < n; i++)
    {
        if (item == data[i])
        {
            found = true;
            loc = i;
            break;
        }
    }

    if (found == true)
    {
        cout << "Item is found in location " << loc << endl;
    }
    else
    {
        cout << "Item is not found" << endl;
    }

    return 0;
}