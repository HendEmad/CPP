[Source](https://www.programiz.com/cpp-programming/function-template#:~:text=Defining%20a%20Function%20Template,followed%20by%20the%20function%20definition.&text=In%20the%20above%20code%2C%20T,and%20typename%20is%20a%20keyword.)

It helps us create a sinle function to work with different data types by using a template.

### Definition
```
template <typename T>
T functionName(T parameter1, T parameter2, ...) {
    // code
}
```

- `T` ---> is a template argument that accepts different data types.
- `typename` ---> is a keyword.
- When an argument of a data type is passed to functionName(), the compiler generates a new version of functionName() for the given data type.

### Calling
```
functionName<dataType>(parameter1, parameter2,...);
```

