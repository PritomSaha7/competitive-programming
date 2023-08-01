AND 
Sol: 1 & 1 = 1, 1 & 0 = 0, 0 & 1 = 0, 0 & 0 = 0
OR
Sol: 1 | 1 = 1, 1 | 0 = 1, 0 | 1 = 1, 0 | 0 = 0
XOR
Sol: 1 ^ 1 = 0, 0 ^ 0 = 0, 0 ^ 1 = 1, 1 ^ 0 = 1
Left Shift
Sol: (x << y) = x * (2 ^ y)
Right Shift
Sol: (x >> y) = x / (2 ^ y)
x & (x - 1)
Sol: it makes the rightmost 1 bit to 0 + it's a power of 2 or not 
x & (1 << i)    
Sol: it checks the i'th bit is 0 or 1
x | (1 << i)
Sol: it makes the i'th bit to 1
x & ~(1 << i)
Sol: it makes the i'th bit to 0
x ^ (1 << i)
Sol: it inverts the i'th bit (1 to 0 or 0 to 1)
x & -x
Sol: it makes all the 1 bit to 0 except the rightmost 1 bit
x | (x - 1)
Sol: it makes all the bits to 1 after the rightmost 1 bit
__builtin_clz(x)
Sol: returns the number of 0 at the beginning
__builtin_ctz(x)
Sol: returns the number of 0 at the end
__builtin_popcount(x)
Sol: returns the number of 1 bit (int)
__builtin_popcountll(x)
Sol: returns the number of 1 bit (long long)
