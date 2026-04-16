# MEMORY ALLOCATOR


## 1. About

Function that allocates memory coordinating with safety manager structure.


## 2. Function

```c
bool alloc_mem(safe_manage manager, size_t allocate, int blocks);
```

- `manager` - Particular pointer safety manager
- `allocate` - Size to allocate for the memory
- `blocks` - Number of blocks to allocate


## 3. Algorithm

1. Check if the pointer is currently holding memory.
2. If yes, deny operation with the reason.
3. Else if not allocate the requested size of memory, and number of blocks.
4. If it fails, tell users the same.

---