#include <iostream>

using namespace std;

int main()
{

    int n1, m1, n2, m2;

    cout << "Enter the number of rows of the first matrix: ";
    cin >> n1;
    cout << "Enter the number of columns of the first matrix: ";
    cin >> m1;

    cout << "Enter the number of rows of the second matrix: ";
    cin >> n2;
    cout << "Enter the number of columns of the second matrix: ";
    cin >> m2;

    int A[n1][m1], B[n2][m2], C[n1][m2];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cout << "Enter the element for matrix A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout << "Enter the element for matrix B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    // Matrix Addition
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Matrix Subtraction
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    //Matrix Multiplication
    for(int i=0; i<n1; i++){
        for(int j=0; j<m2; j++){
           int sum = 0;
           for(int k=0; k<m1; k++){
            sum = sum + A[i][k] * B[k][j];
           }

        }
    }

    return 0;
}