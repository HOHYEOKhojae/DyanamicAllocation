//
//  DynamicAllocation.cpp
//  DyanamicAllocation
//
//  Created by 김건혁 on 2/18/24.
//

#include <stdio.h>
#include <iostream>
#include <iostream>
#include "DyanamicAllocation.h"
using namespace std;

Allocate::Allocate()
:sizeOfarray(5)
{
    init = 10;
}
Allocate al;

void insertArray()
{
    for (int i = 0; i < al.sizeOfarray; i++)
    {
        cout << "insert value : ";
        cin >> *(al.array1 + i);
    }
}

Dynamic::Dynamic()
: array(100)
{
    memory = 100;
    address = &memory;
}

void Dynamic::sayHi()
{
    std::cout << "Hello" << std::endl;
}

