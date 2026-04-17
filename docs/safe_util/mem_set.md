# MEMORY SETTER



## 1. About


Memory setter is used for setting memory to a repeated value of given byte by user.



## 2. Function


```c
void set_mem(safe_manage *manager, int value);
```

- `manager` - The target safety manager containing pointer.
- `value` - Value with which the whole occupied memory has to be filled.



## 3. Algorithm


1. Run sanity check for allocated memory and pointer value.
2. Check if the pointer is pointing to any memory.
3. If yes, set the memory with requested byte value.
4. Else if not, tell user that no memory is being pointed.



## 4. Testing Angles


### 4.1 <u>Normal Conditions</u>:

- Safety manager pointer: `!NULL` & allocated memory: `>0`


### 4.2 <u>Test Cases</u>:

1. Safety manager pointer: `NULL` & allocated memory: `>0`
2. Safety manager pointer: `!NULL` & allocated memory: `0`
3. Allocated memory: `<0`
4. All normal conditions.

---