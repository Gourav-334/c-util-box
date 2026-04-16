# MEMORY RELEASER



## 1. About


Memory releaser is used for releasing/freeing memory which is pointed and occupied.



## 2. Function


```c
void mem_rel(safe_manage *manager);
```

- `manager` - The target safety manager containing pointer.



## 3. Algorithm


1. Run sanity check for allocated memory and pointer value.
2. Check if the pointer is pointing to any memory.
3. If yes, free the memory.
4. Else if not, warn user about double free attempt.
5. If it fails, tell users the same.



## 4. Testing Angles


### 4.1 <u>Normal Conditions</u>:

- Safety manager pointer: `!NULL` & allocated memory: `>0`


### 4.2 <u>Test Cases</u>:

1. Safety manager pointer: `NULL` & allocated memory: `>0`
2. Safety manager pointer: `!NULL` & allocated memory: `0`
3. Allocated memory: `<0`
4. All normal conditions.

---