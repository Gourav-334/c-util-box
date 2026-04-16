/* Macro guards to avoid multiple inclusions. */

#ifndef MEM_REALLOC_H
    #define MEM_REALLOC_H





/* Including headers */

#include "safe_manage.h"    // Safety management structure

#include <stdbool.h>        // For using boolean types










/* Memory reallocation function */

bool realloc_mem(safe_manage *manager, long allocate, int blocks);










/* Closing guard macros */

#endif