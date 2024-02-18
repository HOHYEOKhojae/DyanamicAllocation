#ifndef DyanamicAllocation_h
#define DyanamicAllocation_h

struct Allocate
{
    const int sizeOfarray;
    int init;
    int* array1 = new int[sizeOfarray];
    int* array2 = new int[init];
    Allocate();
};

void insertArray();

class Dynamic
{
public:
    const int array;
    int* address;
    int memory;
    Dynamic();
    
public:
    void sayHi();
};



#endif /* DyanamicAllocation_h */
