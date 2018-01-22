#include <core.h>

typedef uint8_t Uint8;
typedef uint16_t Uint16;
typedef uint32_t Uint32;
typedef uint64_t Uint64;
typedef int8_t Int8;
typedef int16_t Int16;
typedef int32_t Int32;
typedef int64_t Int64;

Uint8 Uint8__PLUS_(Uint8 x, Uint8 y) { return x + y; }
Uint8 Uint8__MINUS_(Uint8 x, Uint8 y) { return x - y; }
Uint8 Uint8__MUL_(Uint8 x, Uint8 y) { return x * y; }
Uint8 Uint8__DIV_(Uint8 x, Uint8 y) { return x / y; }
bool Uint8__EQ_(Uint8 x, Uint8 y) { return x == y; }
bool Uint8__LT_(Uint8 x, Uint8 y) { return x < y; }
bool Uint8__GT_(Uint8 x, Uint8 y) { return x > y; }
Uint8 Uint8_bit_MINUS_shift_MINUS_left(Uint8 x, Uint8 y) { return x << y; }
Uint8 Uint8_bit_MINUS_shift_MINUS_right(Uint8 x, Uint8 y) { return x >> y; }
Uint8 Uint8_bit_MINUS_or(Uint8 x, Uint8 y) { return x | y; }
Uint8 Uint8_bit_MINUS_and(Uint8 x, Uint8 y) { return x & y; }
Uint8 Uint8_bit_MINUS_not(Uint8 x) { return ~x; }
Uint8 Uint8_bit_MINUS_xor(Uint8 x, Uint8 y) { return x ^ y; }
string Uint8_str(Uint8 x) {
    int size = snprintf(NULL, 0, "Uint8(%hhu)", x)+1;
    char *buffer = CARP_MALLOC(size);
    snprintf(buffer, size, "Uint8(%hhu)", x);
    return buffer;
}
Uint8 Uint8_from_MINUS_long(long x) {
  return (Uint8) x;
}
long Uint8_to_MINUS_long(Uint8 x) {
  return (long) x;
}

Uint16 Uint16__PLUS_(Uint16 x, Uint16 y) { return x + y; }
Uint16 Uint16__MINUS_(Uint16 x, Uint16 y) { return x - y; }
Uint16 Uint16__MUL_(Uint16 x, Uint16 y) { return x * y; }
Uint16 Uint16__DIV_(Uint16 x, Uint16 y) { return x / y; }
bool Uint16__EQ_(Uint16 x, Uint16 y) { return x == y; }
bool Uint16__LT_(Uint16 x, Uint16 y) { return x < y; }
bool Uint16__GT_(Uint16 x, Uint16 y) { return x > y; }
Uint16 Uint16_bit_MINUS_shift_MINUS_left(Uint16 x, Uint16 y) { return x << y; }
Uint16 Uint16_bit_MINUS_shift_MINUS_right(Uint16 x, Uint16 y) { return x >> y; }
Uint16 Uint16_bit_MINUS_or(Uint16 x, Uint16 y) { return x | y; }
Uint16 Uint16_bit_MINUS_and(Uint16 x, Uint16 y) { return x & y; }
Uint16 Uint16_bit_MINUS_not(Uint16 x) { return ~x; }
Uint16 Uint16_bit_MINUS_xor(Uint16 x, Uint16 y) { return x ^ y; }
string Uint16_str(Uint16 x) {
    int size = snprintf(NULL, 0, "Uint16(%hu)", x)+1;
    char *buffer = CARP_MALLOC(size);
    snprintf(buffer, size, "Uint16(%hu)", x);
    return buffer;
}
Uint16 Uint16_from_MINUS_long(long x) {
  return (Uint16) x;
}
long Uint16_to_MINUS_long(Uint16 x) {
  return (long) x;
}

Uint32 Uint32__PLUS_(Uint32 x, Uint32 y) { return x + y; }
Uint32 Uint32__MINUS_(Uint32 x, Uint32 y) { return x - y; }
Uint32 Uint32__MUL_(Uint32 x, Uint32 y) { return x * y; }
Uint32 Uint32__DIV_(Uint32 x, Uint32 y) { return x / y; }
bool Uint32__EQ_(Uint32 x, Uint32 y) { return x == y; }
bool Uint32__LT_(Uint32 x, Uint32 y) { return x < y; }
bool Uint32__GT_(Uint32 x, Uint32 y) { return x > y; }
Uint32 Uint32_bit_MINUS_shift_MINUS_left(Uint32 x, Uint32 y) { return x << y; }
Uint32 Uint32_bit_MINUS_shift_MINUS_right(Uint32 x, Uint32 y) { return x >> y; }
Uint32 Uint32_bit_MINUS_or(Uint32 x, Uint32 y) { return x | y; }
Uint32 Uint32_bit_MINUS_and(Uint32 x, Uint32 y) { return x & y; }
Uint32 Uint32_bit_MINUS_not(Uint32 x) { return ~x; }
Uint32 Uint32_bit_MINUS_xor(Uint32 x, Uint32 y) { return x ^ y; }
string Uint32_str(Uint32 x) {
    int size = snprintf(NULL, 0, "Uint32(%u)", x)+1;
    char *buffer = CARP_MALLOC(size);
    snprintf(buffer, size, "Uint32(%u)", x);
    return buffer;
}
Uint32 Uint32_from_MINUS_long(long x) {
  return (Uint32) x;
}
long Uint32_to_MINUS_long(Uint32 x) {
  return (long) x;
}

Uint64 Uint64__PLUS_(Uint64 x, Uint64 y) { return x + y; }
Uint64 Uint64__MINUS_(Uint64 x, Uint64 y) { return x - y; }
Uint64 Uint64__MUL_(Uint64 x, Uint64 y) { return x * y; }
Uint64 Uint64__DIV_(Uint64 x, Uint64 y) { return x / y; }
bool Uint64__EQ_(Uint64 x, Uint64 y) { return x == y; }
bool Uint64__LT_(Uint64 x, Uint64 y) { return x < y; }
bool Uint64__GT_(Uint64 x, Uint64 y) { return x > y; }
Uint64 Uint64_bit_MINUS_shift_MINUS_left(Uint64 x, Uint64 y) { return x << y; }
Uint64 Uint64_bit_MINUS_shift_MINUS_right(Uint64 x, Uint64 y) { return x >> y; }
Uint64 Uint64_bit_MINUS_or(Uint64 x, Uint64 y) { return x | y; }
Uint64 Uint64_bit_MINUS_and(Uint64 x, Uint64 y) { return x & y; }
Uint64 Uint64_bit_MINUS_not(Uint64 x) { return ~x; }
Uint64 Uint64_bit_MINUS_xor(Uint64 x, Uint64 y) { return x ^ y; }
string Uint64_str(Uint64 x) {
    int size = snprintf(NULL, 0, "Uint64(%llu)", x)+1;
    char *buffer = CARP_MALLOC(size);
    snprintf(buffer, size, "Uint64(%llu)", x);
    return buffer;
}
Uint64 Uint64_from_MINUS_long(long x) {
  return (Uint64) x;
}
long Uint64_to_MINUS_long(Uint64 x) {
  return (long) x;
}

Int8 Int8__PLUS_(Int8 x, Int8 y) { return x + y; }
Int8 Int8__MINUS_(Int8 x, Int8 y) { return x - y; }
Int8 Int8__MUL_(Int8 x, Int8 y) { return x * y; }
Int8 Int8__DIV_(Int8 x, Int8 y) { return x / y; }
bool Int8__EQ_(Int8 x, Int8 y) { return x == y; }
bool Int8__LT_(Int8 x, Int8 y) { return x < y; }
bool Int8__GT_(Int8 x, Int8 y) { return x > y; }
Int8 Int8_bit_MINUS_shift_MINUS_left(Int8 x, Int8 y) { return x << y; }
Int8 Int8_bit_MINUS_shift_MINUS_right(Int8 x, Int8 y) { return x >> y; }
Int8 Int8_bit_MINUS_or(Int8 x, Int8 y) { return x | y; }
Int8 Int8_bit_MINUS_and(Int8 x, Int8 y) { return x & y; }
Int8 Int8_bit_MINUS_not(Int8 x) { return ~x; }
Int8 Int8_bit_MINUS_xor(Int8 x, Int8 y) { return x ^ y; }
string Int8_str(Int8 x) {
    int size = snprintf(NULL, 0, "Int8(%hhd)", x)+1;
    char *buffer = CARP_MALLOC(size);
    snprintf(buffer, size, "Int8(%hhd)", x);
    return buffer;
}
Int8 Int8_from_MINUS_long(long x) {
  return (Int8) x;
}
long Int8_to_MINUS_long(Int8 x) {
  return (long) x;
}


Int16 Int16__PLUS_(Int16 x, Int16 y) { return x + y; }
Int16 Int16__MINUS_(Int16 x, Int16 y) { return x - y; }
Int16 Int16__MUL_(Int16 x, Int16 y) { return x * y; }
Int16 Int16__DIV_(Int16 x, Int16 y) { return x / y; }
bool Int16__EQ_(Int16 x, Int16 y) { return x == y; }
bool Int16__LT_(Int16 x, Int16 y) { return x < y; }
bool Int16__GT_(Int16 x, Int16 y) { return x > y; }
Int16 Int16_bit_MINUS_shift_MINUS_left(Int16 x, Int16 y) { return x << y; }
Int16 Int16_bit_MINUS_shift_MINUS_right(Int16 x, Int16 y) { return x >> y; }
Int16 Int16_bit_MINUS_or(Int16 x, Int16 y) { return x | y; }
Int16 Int16_bit_MINUS_and(Int16 x, Int16 y) { return x & y; }
Int16 Int16_bit_MINUS_not(Int16 x) { return ~x; }
Int16 Int16_bit_MINUS_xor(Int16 x, Int16 y) { return x ^ y; }
string Int16_str(Int16 x) {
    int size = snprintf(NULL, 0, "Int16(%hd)", x)+1;
    char *buffer = CARP_MALLOC(size);
    snprintf(buffer, size, "Int16(%hd)", x);
    return buffer;
}
Int16 Int16_from_MINUS_long(long x) {
  return (Int16) x;
}
long Int16_to_MINUS_long(Int16 x) {
  return (long) x;
}


Int32 Int32__PLUS_(Int32 x, Int32 y) { return x + y; }
Int32 Int32__MINUS_(Int32 x, Int32 y) { return x - y; }
Int32 Int32__MUL_(Int32 x, Int32 y) { return x * y; }
Int32 Int32__DIV_(Int32 x, Int32 y) { return x / y; }
bool Int32__EQ_(Int32 x, Int32 y) { return x == y; }
bool Int32__LT_(Int32 x, Int32 y) { return x < y; }
bool Int32__GT_(Int32 x, Int32 y) { return x > y; }
Int32 Int32_bit_MINUS_shift_MINUS_left(Int32 x, Int32 y) { return x << y; }
Int32 Int32_bit_MINUS_shift_MINUS_right(Int32 x, Int32 y) { return x >> y; }
Int32 Int32_bit_MINUS_or(Int32 x, Int32 y) { return x | y; }
Int32 Int32_bit_MINUS_and(Int32 x, Int32 y) { return x & y; }
Int32 Int32_bit_MINUS_not(Int32 x) { return ~x; }
Int32 Int32_bit_MINUS_xor(Int32 x, Int32 y) { return x ^ y; }
string Int32_str(Int32 x) {
    int size = snprintf(NULL, 0, "Int32(%d)", x)+1;
    char *buffer = CARP_MALLOC(size);
    snprintf(buffer, size, "Int32(%d)", x);
    return buffer;
}
Int32 Int32_from_MINUS_long(long x) {
  return (Int32) x;
}
long Int32_to_MINUS_long(Int32 x) {
  return (long) x;
}


Int64 Int64__PLUS_(Int64 x, Int64 y) { return x + y; }
Int64 Int64__MINUS_(Int64 x, Int64 y) { return x - y; }
Int64 Int64__MUL_(Int64 x, Int64 y) { return x * y; }
Int64 Int64__DIV_(Int64 x, Int64 y) { return x / y; }
bool Int64__EQ_(Int64 x, Int64 y) { return x == y; }
bool Int64__LT_(Int64 x, Int64 y) { return x < y; }
bool Int64__GT_(Int64 x, Int64 y) { return x > y; }
Int64 Int64_bit_MINUS_shift_MINUS_left(Int64 x, Int64 y) { return x << y; }
Int64 Int64_bit_MINUS_shift_MINUS_right(Int64 x, Int64 y) { return x >> y; }
Int64 Int64_bit_MINUS_or(Int64 x, Int64 y) { return x | y; }
Int64 Int64_bit_MINUS_and(Int64 x, Int64 y) { return x & y; }
Int64 Int64_bit_MINUS_not(Int64 x) { return ~x; }
Int64 Int64_bit_MINUS_xor(Int64 x, Int64 y) { return x ^ y; }
string Int64_str(Int64 x) {
    int size = snprintf(NULL, 0, "Int64(%lld)", x)+1;
    char *buffer = CARP_MALLOC(size);
    snprintf(buffer, size, "Int64(%lld)", x);
    return buffer;
}
Int64 Int64_from_MINUS_long(long x) {
  return (Int64) x;
}
long Int64_to_MINUS_long(Int64 x) {
  return (long) x;
}

