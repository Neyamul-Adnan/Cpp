#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;

    cout << "Enter rows of first matrix: ";
    cin >> r1;
    cout << "Enter columns of first matrix: ";
    cin >> c1;

    int a[r1][c1];

    cout << "Enter first matrix elements:\n";

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter rows of second matrix: ";
    cin >> r2;
    cout << "Enter columns of second matrix: ";
    cin >> c2;

    int b[r2][c2];

    cout << "Enter second matrix elements:\n";

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }

  
    if (r1 == r2 && c1 == c2)
    {
        cout << "\nAddition:\n";

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << a[i][j] + b[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "\nAddition is not possible.\n";
    }

    
    if (r1 == r2 && c1 == c2)
    {
        cout << "\nSubtraction:\n";

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << a[i][j] - b[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "\nSubtraction is not possible.\n";
    }

   
    if (c1 == r2)
    {
        cout << "\nMultiplication:\n";

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int sum = 0;

                for (int k = 0; k < c1; k++)
                {
                    sum += a[i][k] * b[k][j];
                }

                cout << sum << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "\nMultiplication is not possible.\n";
    }

    
    cout << "\nTranspose of First Matrix:\n";

    for (int j = 0; j < c1; j++)
    {
        for (int i = 0; i < r1; i++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

   
    cout << "\nTranspose of Second Matrix:\n";

    for (int j = 0; j < c2; j++)
    {
        for (int i = 0; i < r2; i++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}