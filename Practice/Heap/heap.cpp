#include <iostream>
#include <vector>

using namespace std;

    void heapifyUp(vector<int>& A, int i)
    {
        while (i > 0)
        {
            int parent = (i - 1) / 2;
            if (A[i] > A[parent])
            {
                swap(A[i], A[parent]);
                i = parent;
            }
            else
            {
                break;
            }
        }
    }

    void heapifyDown(vector<int>& A, int n, int i)
    {
        while (true)
        {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;

            if (left < n && A[left] > A[largest])
            {
                largest = left;
            }
            if (right < n && A[right] > A[largest])
            {
                largest = right;
            }
            if (largest == i)
            {
                break;
            }
            else
            {
                swap(A[i], A[largest]);
                i = largest;
            }
        }
    }
    int main()
{
    return 0;
}
