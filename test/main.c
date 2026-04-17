#include "../include/safe_util/mem_realloc.h"
#include "../include/safe_util/mem_set.h"
#include <stdio.h>



int main(int argc, char *argv[])
{
    safe_manage manager = {.ptr=NULL, .allocated=0};

    realloc_mem(&manager, sizeof(int), 2);      // Normal
    printf("ptr=%p, allocated=%ld, *ptr=%d\n", manager.ptr, manager.allocated, *((int*)(manager.ptr)));

    manager.allocated = 0; set_mem(&manager, 98);   // No allocation, !NULL ptr
    printf("ptr=%p, allocated=%ld, *ptr=%d\n", manager.ptr, manager.allocated, *((int*)(manager.ptr)));

    manager.allocated = 8; set_mem(&manager, 98);   // Allocation, !NULL ptr
    printf("ptr=%p, allocated=%ld, *ptr=%d\n", manager.ptr, manager.allocated, *((int*)(manager.ptr)));

    manager.ptr = NULL; manager.allocated = 4; set_mem(&manager, 98);   // Allocated, NULL ptr
    printf("ptr=%p, allocated=%ld, *ptr=%d\n", manager.ptr, manager.allocated, *((int*)(manager.ptr)));

    manager.allocated = -2; set_mem(&manager, 98);  // -ve allocation, NULL ptr
    printf("ptr=%p, allocated=%ld, *ptr=%d\n", manager.ptr, manager.allocated, *((int*)(manager.ptr)));


    
    return 0;
}