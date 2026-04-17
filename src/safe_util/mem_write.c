/* Including headers */

#include "../../include/safe_util/mem_write.h"

#include <stdio.h>      // Standard error buffer management
#include <string.h>     // To use memset()










/* Memory reallocation function */

bool write_mem(safe_manage *manager, long value, long index, size_t size)
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
        if (index*size>=manager->allocated)
        {
            fprintf(stderr, "BUFFER OVERFLOW: Occupied memory is %ld bytes long, but request reaches %ld bytes!\n", manager->allocated, index*size);

            return false;
        }
        else if (index*size<manager->allocated)
        {
            switch (size)
            {
                case CHARACTER: *((char*)(manager->ptr + index)) = value; break;
                case SHORT: *((short*)(manager->ptr + index)) = value; break;
                case INTEGER: *((int*)(manager->ptr + index)) = value; break;
                case LONG: *((long*)(manager->ptr + index)) = value; break;
            }
        }

        return true;
    }
    else if (manager->allocated==0)
    {
        fprintf(stderr, "NO OCCUPATION: Memory is requested to be written on, but not being occupied yet!\n");

        return false;
    }
    else if (manager->allocated<0)
    {
        fprintf(stderr, "MITIGATING UNDERFLOW: Underflow risk mitigated from %p.\n", manager->ptr);
        manager -> allocated = 0;

        return false;
    }
}