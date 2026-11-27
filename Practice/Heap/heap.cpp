#include <iostream>
#include <vector>

using namespace std;

int main() {
    void heapifyUp(vector<int>& A, int i){
        while (i > 0) {
            int parent = (i - 1) / 2;
            if (A[i] > A[parent]) {
                swap(A[i], A[parent]);
                i = parent;
            } else {
                break;
            }
        }
    }
    return 0;
}