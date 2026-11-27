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

    void insert(vector<int>& A, int item)
    {
        A.push_back(item);
        heapifyUp(A, (int)A.size() - 1);
    }

    int getMax(vector<int>& A)
    {
        return A[0];
    }

    int extractMax(vector<int>& A)
    {
        if (A.empty())
        {
            cout << "Heap is empty" << endl;
        }
        int top = A[0];
        int last = A.back();
        A.pop_back();
        if (!A.empty())
        {
            A[0] = last;
            heapifyDown(A, (int)A.size(), 0);
        }
        return top;
    }

    void buildHeap(vector<int>& A)
    {
        int n = (int)A.size();
        for (int i = n / 2 - 1; i >= 0; --i)
        {
            heapifyDown(A, n, i);
        }
    }
    
    void heapSort(vector<int>& A)
    {
        buildHeap(A);
        int n = (int)A.size();
        for (int end = n - 1; end > 0; --end)
        {
            swap(A[0], A[end]);
            heapifyDown(A, end, 0);
        }
    }