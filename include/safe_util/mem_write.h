/* Macro guards to avoid multiple inclusions. */

#ifndef MEM_WRITE_H
    #define MEM_WRITE_H



/* Size macros */

#define CHARACTER 1
#define SHORT 2
#define INTEGER 4
#define LONG 8





/* Including headers */

#include "safe_manage.h"    // Safety management structure

#include <stdbool.h>        // For using boolean types










/* Memory setting function */

bool write_mem(safe_manage *manager, long value, long index, size_t size);










/* Closing guard macros */

#endif