# SAFETY UTILITY


## 1. Problems Tackled

- **Buffer overflow:** Writing beyond allocated memory.
- **Buffer underflow:** Accessing memory before allocated block.
- **Dangling pointer access:** Using memory after it has been freed.
- **Double free:** Freeing the same pointer more than once.
- **Memory leak:** Allocated memory not freed.
- **Invalid free:** Freeing memory not allocated via allocator.
- **Uninitialized memory access:** Using memory before assigning a value.
- **Wild pointer:** Pointer pointing to random memory.
- **Memory exhaustion:** Stack memory exceeded.
- **Heap corruption:** Damage to allocator metadata.


## 2. Library Names

- Archive: `safe_util.a`
- Shared object: `safe_util.so`


## 3. Involved Header Files

- **`safe_manage.h`** - Header file containing structure which manages safety and contains all required metadata.
- **`mem_alloc.h`** - Header file declaring function responsible for allocating memory.
- **`mem_realloc.h`** - Header file declaring function responsible for modifying allocated memory.
- **`mem_rel.h`** - Header file declaring function responsible for releasing memory.
- **`mem_setter.h`** - Header file declaring function responsible for writing memory.
- **`mem_writer.h`** - Header file declaring function responsible for writing memory.
- **`cont_mem_writer.h`** - Header file declaring function responsible for contagiously writing memory.


## 4. Involved Source Files

- **`mem_alloc.c`** - Source file declaring function responsible for allocating memory.
- **`mem_realloc.c`** - Source file declaring function responsible for modifying allocated memory.
- **`mem_rel.c`** - Source file declaring function responsible for releasing memory.
- **`mem_setter.c`** - Source file declaring function responsible for writing memory.
- **`mem_writer.c`** - Source file declaring function responsible for writing memory.
- **`cont_mem_writer.c`** - Source file declaring function responsible for contagiously writing memory.

---