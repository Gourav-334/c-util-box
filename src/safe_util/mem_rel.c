/* Including headers */

#include "../../include/safe_util/mem_rel.h"

#include <stdio.h>      // Standard error buffer management
#include <stdlib.h>     // To use memory management functions










/* Memory reallocation function */

bool rel_mem(safe_manage *manager)
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
        free(manager->ptr);
        manager -> ptr = NULL;
        manager -> allocated = 0;

        return true;
    }
    else if (manager->allocated==0)
    {
        fprintf(stderr, "DOUBLE FREE: An attempt to free already freed memory was detected!\n");

        return false;
    }
    else if (manager->allocated<0)
    {
        fprintf(stderr, "MITIGATING UNDERFLOW: Underflow risk mitigated from %p.\n", manager->ptr);
        manager -> allocated = 0;

        return false;
    }
}