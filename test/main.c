#include "../include/safe_util/mem_realloc.h"
#include "../include/safe_util/mem_rel.h"
#include <stdio.h>



int main(int argc, char *argv[])
{
    safe_manage manager = {.ptr=NULL, .allocated=0};

    realloc_mem(&manager, sizeof(int), 2);      // Normal
    printf("ptr=%p, allocated=%ld\n", manager.ptr, manager.allocated);

    manager.allocated = 0; rel_mem(&manager);   // No allocation, !NULL ptr
    printf("ptr=%p, allocated=%ld\n", manager.ptr, manager.allocated);

    manager.allocated = 8; rel_mem(&manager);   // Allocation, !NULL ptr
    printf("ptr=%p, allocated=%ld\n", manager.ptr, manager.allocated);

    manager.ptr = NULL; manager.allocated = 4; rel_mem(&manager);   // Allocated, NULL ptr
    printf("ptr=%p, allocated=%ld\n", manager.ptr, manager.allocated);

    manager.allocated = -2; rel_mem(&manager);  // -ve allocation, NULL ptr
    printf("ptr=%p, allocated=%ld\n", manager.ptr, manager.allocated);


    
    return 0;
}