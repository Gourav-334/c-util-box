/* Macro guards to avoid multiple inclusions. */

#ifndef MEM_REL_H
    #define MEM_REL_H





/* Including headers */

#include "safe_manage.h"    // Safety management structure

#include <stdbool.h>        // For using boolean types










/* Memory releasing function */

bool rel_mem(safe_manage *manager);










/* Closing guard macros */

#endif