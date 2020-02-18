# stdint

**Update:** This is [now](https://github.com/carp-lang/Carp/pull/684) in core!

A wrapper around the types defined in `stdint.h` for Carp.

The numerical types are `Int<8,16,32,64>` and `Uint<8,16,32,64>`; the `U` means
unsigned, the numbers denote the bit width of the type. This is taken straight
out of [the stdint header](http://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdint.h.html).

## Interface

The interface is the same for all types. The following functions are supported:

```
; with T being any of the types in the library:

; tests for equality
(register = (λ [T T] Bool))
; tests whether the first parameter is larger than the second
(register > (λ [T T] Bool))
; tests whether the first parameter is smaller than the second
(register < (λ [T T] Bool)))

; adds two numbers
(register + (λ [T T] T)))
; subtracts two numbers
(register - (λ [T T] T)))
; multiplies two numbers
(register * (λ [T T] T)))
; divides two numbers
(register / (λ [T T] T)))

; shifts the first number left by a number of bytes specified by the second number
(register bit-shift-left (λ [T T] T)))
; shifts the first number right by a number of bytes specified by the second number
(register bit-shift-right (λ [T T] T)))
; performs a binary or on two numbers
(register bit-or (λ [T T] T)))
; performs a binary and on two numbers
(register bit-and (λ [T T] T)))
; performs a binary not on a number
(register bit-not (λ [T] T)))
; performs a binary xor on two numbers
(register bit-xor (λ [T T] T)))
; converts a number to a long (might lead to precision loss on the biggest types)
(register to-long (λ [T] Long)))
; converts a long to a number (not all possible numbers are supported by long)
(register from-long (λ [Long] T)))

; converts a number to a string (it will look like this: "(T <value>)")
(register str (λ [T] String)))

; converts a byte array into an array of T
; (if T is multiple bytes long, multiple bytes become one element)
; N.B.: it does not take care of endianness for you!
(register from-bytes (λ [&(Array Byte)] (Array T)))
```

I hope this helps in getting started! The tests in `tests/` also showcase the
interface.

<hr/>

Have fun!
