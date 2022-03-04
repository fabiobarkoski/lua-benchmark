# lua-benchmark
A simple benchmark to compare Lua and your compiler to another popular languages

## Current compared Languages

- **C**
- **Python**


## The Script

The script used in all of the languages is a simple loop that create a array and with that array we check if the item in the array is a prime number, if yes then append in another array

## Benchmark

| Languages | Time in secs. |
| ------------- |:-------------:|
| Python | ~27.1 |
| C | ~1.0 |
| Lua | ~3.8 |
| Luajit| ~1.9 |


## Run Scripts

### To run the scripts type:

#### C

```c
  gcc test.c -o test.sh
```
Then
```c
  ./test.sh
```
___
#### Python

```python
    python test.py
```
Or
```python
    python3 test.py
```
____

#### Lua

```Lua
    lua test.lua
```
Or if you want run compiled
```Lua
    luajit test.lua
```


## Links to languages websites
- [Lua](https://www.lua.org/home.html "Lua website")  
- [LuaJIT](https://luajit.org "LuaJIT website")  
- [Python](https://www.python.org "Python website")  
- [C](https://devdocs.io/c/ "C Documentation")
