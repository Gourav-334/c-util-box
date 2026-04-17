/* Including headers */

#include "../../include/safe_util/mem_rel.h"

#include <stdio.h>      // Standard error buffer management
#include <string.h>     // To use memset()










/* Memory reallocation function */

bool set_mem(safe_manage *manager, int value)
{
    /* Sanity check about current member values. */

    if (manager->ptr==NULL && manager->allocated>0)
    {
        fprintf(stderr, "CORRUPTION: Pointer is NULL but memory is apparently allocated.\n");

        return false;
    }
    else if (manager->ptr!=NULL && manager->allocated==0)
    {
        fprintf(stderr, "CORRUPTION: Pointer is pointing %p but memory is apparently unallocated.\n", manager->ptr);

        return false;
    }





    /* Checking if memory is already allocated or not. */

    if (manager->allocated>0)
    {
        memset(manager->ptr, value, manager->allocated);
        return true;
    }
    else if (manager->allocated==0)
    {
        fprintf(stderr, "NO OCCUPATION: Memory is requested to be set, but not being occupied yet!\n");

        return false;
    }
    else if (manager->allocated<0)
    {
        fprintf(stderr, "MITIGATING UNDERFLOW: Underflow risk mitigated from %p.\n", manager->ptr);
        manager -> allocated = 0;

        return false;
    }
}