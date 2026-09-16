#include <iostream>
using namespace std;

int main()
{
    
    int data[16] = {4, 8, 12, 20, 30, 35, 37, 47, 59, 66, 78, 100, 112, 128, 138, 150};
    int n = 16;

    cout << "Enter item need to be searched: ";
    int item;
    cin >> item;

    bool found = false; 
    int location;
    
    int low = 0;
    int high = n-1;
    int mid;
    while (low<=high)
    {
        
        mid = (low+high)/2;
        if(item == data[mid]){
            found = true;
            location = mid;
            break;
        }
        else if (item<data[mid])
        {
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
        

    }
    if (found==true)
    {
        cout<<"Item found at location: "<<location;
    }
    else{
        cout<<"Item not found";
    }
    

    return 0;
}