/* Including headers */

#include "../../include/safe_util/mem_alloc.h"

#include <stdio.h>      // Standard error buffer management










/* Memory allocation function */

bool alloc_mem(safe_manage manager, size_t allocate, int blocks)
{
    /* Checking if memory is already allocated or not. */

    if (manager.allocated==0)
    {
        manager.ptr = malloc(allocate);
    }
    else if (manager.allocated>0)
    {
        fprintf(stderr, "DOUBLE ALLOCATION: Memory already allocated at %x!\n", manager.ptr);
    }
    else if (manager.allocated<0)
    {
        fprintf(stderr, "CORRECTION: Underflow risk mitigated from %x.\n", manager.ptr);
    }
}