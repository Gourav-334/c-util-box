#include "../include/safe_util/mem_realloc.h"
#include <stdio.h>



int main(int argc, char *argv[])
{
    safe_manage manager = {.ptr=NULL, .allocated=0};

    realloc_mem(&manager, -2, 5);
    printf("ptr=%p, allocated=%ld\n", manager.ptr, manager.allocated);

    realloc_mem(&manager, sizeof(int), 0);
    printf("ptr=%p, allocated=%ld\n", manager.ptr, manager.allocated);

    realloc_mem(&manager, sizeof(int), 2);
    printf("ptr=%p, allocated=%ld\n", manager.ptr, manager.allocated);

    manager.allocated = 0; realloc_mem(&manager, sizeof(int), 2);
    printf("ptr=%p, allocated=%ld\n", manager.ptr, manager.allocated);

    manager.ptr = NULL; manager.allocated = 4; realloc_mem(&manager, sizeof(int), 2);
    printf("ptr=%p, allocated=%ld\n", manager.ptr, manager.allocated);

    manager.allocated = -2; realloc_mem(&manager, sizeof(int), 2);
    printf("ptr=%p, allocated=%ld\n", manager.ptr, manager.allocated);


    
    return 0;
}