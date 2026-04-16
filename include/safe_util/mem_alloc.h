/* Macro guards to avoid multiple inclusions. */

#ifndef MEM_ALLOC_H
    #define MEM_ALLOC_H





/* Including headers */

#include "safe_manage.h"    // Safety management structure

#include <stddef.h>         // For using 'size_t'
#include <stdbool.h>        // For using boolean types










/* Memory allocation function */

bool alloc_mem(safe_manage manager, size_t allocate, int blocks);










/* Closing guard macros */

#endif