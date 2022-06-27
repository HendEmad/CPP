- Unsigned integer type to represent the object size in bytes(never be negative).
- It is used for array indexing and loop counting.
- It is guaranteed to be big enough to contain the size of the biggest object the host system can handle. This maximum permissible size is dependent on the compiler:
  * If the compilter is `32 bit` --> the `size_t` is a typedef(alias) for `unsigned int`.
  * If the compiler is `64 bit` --> the `size_t` is a typedef(alias) for `unsigned long long`. In this case, it is better to use `size_t` as using `unsigned long long` will degrade the performance as it needs two machine instructions to execute.

- ***Important note***
    If the `size_t` is used in arithmetic opertation whose result is negative, the program would definitely give an unexpected result.
