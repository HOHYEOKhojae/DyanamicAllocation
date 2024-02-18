#include <iostream>
using namespace std;

// Heap Memory
// Make size of fluid array to heap memory
int main(int argc, const char * argv[]) {
    
    // Declare size and pointer to stack
    int size;
    int* pArray;
    
    // Insert the size of array
    do {
        {
            cout << "Insert the array size bigger than zero: ";
            cin >> size;
        }
    } while (size <= 0);
    
    // Make array to heap
    pArray =  new int[size];
    // int* pArray = new int[size];
    
    // Insert the value to array
    for(int i = 0; i < size; i++)
    {
        cout << "Count " << i << "insert the value : ";
        cin >> *(pArray + i);
    }
    // Print value of array
    cout << "Value of array : " << endl;
    for(int i = 0; i < size; i ++)
    {
        cout << *(pArray + i) << "  ";
    }
    cout << endl;
    // Delete the array from haep
    delete[] pArray;
    
    for(int i = 0; i < size; i ++)
    {
        cout << "DELETE " << i << " : " << endl;
        cout << *(pArray + i) << "  ";
    }
    
    return 0;
}
