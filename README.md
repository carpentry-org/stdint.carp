# stdint

A wrapper around the types defined in `stdint.h` for Carp.

The numerical types are `Int<8,16,32,64>` and `Uint<8,16,32,64>`; the `U` means
unsigned, the numbers denote the bit width of the type. This is taken straight
out of [the stdint header](http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdint.h.html).

## Interface

The interface is the same for all types. The following functions are supported:

```
with T being any of the types in the library:

= :: (λ [T T] Bool)
  tests for equality
/= :: (λ [T T] Bool)
  tests for inequality
> :: (λ [T T] Bool)
  tests whether the first parameter is larger than the second
< (λ [T T] Bool))
  tests whether the first parameter is smaller than the second
+ (λ [T T] T))
  adds two numbers
- (λ [T T] T))
  subtracts two numbers
* (λ [T T] T))
  multiplies two numbers
/ (λ [T T] T))
  divides two numbers
bit-shift-left (λ [T T] T))
  shifts the first number left by a number of bytes specified by the second number
bit-shift-right (λ [T T] T))
  shifts the first number right by a number of bytes specified by the second number
bit-or (λ [T T] T))
  performs a binary or on two numbers
bit-and (λ [T T] T))
  performs a binary and on two numbers
bit-not (λ [T] T))
  performs a binary not on a number
bit-xor (λ [T T] T))
  performs a binary xor on two numbers
to-long (λ [T] Long))
  converts a number to a long (might lead to precision loss on the biggest types)
from-long (λ [Long] T))
  converts a long to a number (not all possible numbers are supported by long)
str (λ [T] String))
  converts a number to a string (it will look like this: "T(<value>)")
```

I hope this helps in getting started! The tests in `tests/` also showcase the
interface.

<hr/>

Have fun!
