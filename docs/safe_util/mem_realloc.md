# MEMORY REALLOCATOR



## 1. About


Memory allocation modifier modifies the total memory occupied, by re-allocating on the same space.



## 2. Function


```c
void mem_realloc(safe_manage *manager, long int allocate, int blocks);
```

- `manager` - The target safety manager containing pointer.
- `allocate` - Memory to reallocate
- `blocks` - Number of blocks to reallocate



## 3. Algorithm


1. Check if asked size & number of blocks are positive.
2. Run sanity check for allocated memory and pointer value.
3. Check if the pointer is currently holding memory.
4. If yes, reallocate memory as requested.
5. Else if not allocate the requested size of memory, and number of blocks.
6. If it fails, tell users the same.



## 4. Testing Angles


### 4.1 <u>Normal Conditions</u>:

- Requested allocation: `>0`
- Requested number of blocks: `>=1`
- Safety manager pointer: `NULL` & allocated memory: `0`
- Safety manager pointer: `!NULL` & allocated memory: `>0`
- Allocated memory: `>=0`


### 4.2 <u>Test Cases</u>:

1. All normal conditions.
2. Requested allocation: `<=0`
3. Requested number of blocks: `<1`
4. Safety manager pointer: `NULL` & allocated memory: `>0`
5. Safety manager pointer: `!NULL` & allocated memory: `0`
6. Allocated memory: `<0`

---