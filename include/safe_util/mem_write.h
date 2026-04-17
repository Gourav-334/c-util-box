/* Macro guards to avoid multiple inclusions. */

#ifndef MEM_SET_H
    #define MEM_SET_H





/* Including headers */

#include "safe_manage.h"    // Safety management structure

#include <stdbool.h>        // For using boolean types










/* Memory setting function */

bool set_mem(safe_manage *manager, int value);










/* Closing guard macros */

#endif