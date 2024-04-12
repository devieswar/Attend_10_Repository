// Attend_10_Repository.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Attend_10_Repository.h"


// This is an example of an exported variable
ATTEND10REPOSITORY_API int nAttend10Repository=0;

// This is an example of an exported function.
ATTEND10REPOSITORY_API int fnAttend10Repository(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CAttend10Repository::CAttend10Repository()
{
    return;
}

ATTEND10REPOSITORY_API int initial_Test(int i) {
    int mul = i * i;
    return mul;
}
