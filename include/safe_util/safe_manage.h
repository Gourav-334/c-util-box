/* Guard macros to avoid multiple inclusions. */

#ifndef SAFE_MANAGE_H
    #define SAFE_MANAGE_H





/* Including headers */

#include <stddef.h>     // To work with 'size_t'










/* Safe management structure */

typedef struct safe_manage {
    void *ptr;
    long allocated;
} safe_manage;










/* Closing guard macros */

#endif