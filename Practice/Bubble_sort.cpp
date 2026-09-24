#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[n], i, j, temp;

    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;

    cout << "ENTER THE ELEMENTS:" << endl;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout<<"After Bubble sort the Elements are: "<<endl;
    //cout << "SORTED ARRAY:" << endl;
    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}