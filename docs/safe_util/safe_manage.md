# SAFETY MANAGER



## 1. About


A `struct` that contains various fields to provide safety for memory-related operations.



## 2. Involved Fields


### 2.1 <u>Buffer Overflow</u>:

- Allocated size (variable)
- Assign (function)
- Write (function)


### 2.2 <u>Buffer Underflow</u>:

- Assign (function)


### 2.3 <u>Dangling Pointers</u>:

- Status (variable)


### 2.4 <u>Double Free</u>:

- Status (variable)



## 3. Structure


### 3.1 <u>Unoptimized</u>:

```c
typedef struct safe_manage {
    void *ptr;
    size_t allocated;
} safe_manage;
```

- `ptr` - Pointer with value
- `allocated` - Tells how many bytes are allocated



## 4. Example Usage


```c
safe_manage ptr = {
    .ptr=NULL,
    .allocated=0,
};
```

---