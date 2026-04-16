/* Including headers */

#include "../../include/safe_util/mem_realloc.h"

#include <stdio.h>      // Standard error buffer management
#include <stdlib.h>     // To use memory management functions










/* Memory allocation function */

bool realloc_mem(safe_manage *manager, long allocate, int blocks)
{
    /* Checking if requested allocation and blocks are logical. */

    if (allocate<=0)
    {
        fprintf(stderr, "SEMI-NEGATIVE ALLOCATION: Requested size of reallocation must be positive!\n");
        
        return false;
    }
    if (blocks<1)
    {
        fprintf(stderr, "INSUFFICIENT BLOCKS: Requested number of blocks must be atleast %d!\n", 1);

        return false;
    }





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

    if (manager->allocated==0)
    {
        if (manager -> ptr = realloc(manager->ptr, blocks*(size_t)allocate))
        {
            manager->allocated = blocks*allocate;

            return true;
        }
        else
        {
            fprintf(stderr, "ALLOCATION FAILURE: Memory reallocation failed for unknown reason.");

            return false;
        }
    }
    else if (manager->allocated<0)
    {
        fprintf(stderr, "MITIGATING UNDERFLOW: Underflow risk mitigated from %p.\n", manager->ptr);
        manager -> allocated = 0;

        return false;
    }
}