# MEMORY WRITER



## 1. About


Memory writer is used for writing values to memory



## 2. Function


```c
bool write_mem(safe_manage *manager, long value, long index, size_t size);
```

- `manager` - The target safety manager containing pointer.
- `value` - Value with which the whole occupied memory has to be filled.
- `index` - Index where the data has to be inserted.
- `size` - Intended size of each data block



## 3. Algorithm


1. Run sanity check for allocated memory and pointer value.
2. Check if the pointer is pointing to any memory.
3. If yes, for overflow attack through access too far.
4. Then write the memory with requested byte value if everything is fine, as per data type.
4. Else if not, tell user that no memory is being pointed.



## 4. Testing Angles


### 4.1 <u>Normal Conditions</u>:

- Safety manager pointer: `!NULL` & allocated memory: `>0`


### 4.2 <u>Test Cases</u>:

1. Safety manager pointer: `NULL` & allocated memory: `>0`
2. Safety manager pointer: `!NULL` & allocated memory: `0`
3. Overflow attack
4. Allocated memory: `<0`
5. All normal conditions.

---