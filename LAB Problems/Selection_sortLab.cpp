#include <iostream>
#include <time.h>
using namespace std;

int main()
{

    int n;
    int element[n], temp;
    srand(time(0));

    cout << "Enter the number of elements you want to sort:";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        element[i] = rand();
    }
    cout << "The random elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " " << element[i];
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (element[j] < element[min])
            {
                min = j;
            }
        }
        temp = element[min];
        element[min] = element[i];
        element[i] = temp;
    }

    cout << "After Selection sorting the elements are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " " << element[i];
    }

    return 0;
}