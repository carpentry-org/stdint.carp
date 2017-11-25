#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef char* string;
#define CARP_MALLOC(size) malloc(size)

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
Uint8 Uint8__LT__LT_(Uint8 x, Uint8 y) { return x << y; }
Uint8 Uint8__GT__GT_(Uint8 x, Uint8 y) { return x >> y; }
Uint8 Uint8_bor(Uint8 x, Uint8 y) { return x | y; }
Uint8 Uint8_band(Uint8 x, Uint8 y) { return x & y; }
Uint8 Uint8_bnot(Uint8 x) { return ~x; }
Uint8 Uint8_bxor(Uint8 x, Uint8 y) { return x ^ y; }
string Uint8_str(Uint8 x) {
    char *buffer = CARP_MALLOC(64);
    snprintf(buffer, 64, "Uint8(%hhu)", x);
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
Uint16 Uint16__LT__LT_(Uint16 x, Uint16 y) { return x << y; }
Uint16 Uint16__GT__GT_(Uint16 x, Uint16 y) { return x >> y; }
Uint16 Uint16_bor(Uint16 x, Uint16 y) { return x | y; }
Uint16 Uint16_band(Uint16 x, Uint16 y) { return x & y; }
Uint16 Uint16_bnot(Uint16 x) { return ~x; }
Uint16 Uint16_bxor(Uint16 x, Uint16 y) { return x ^ y; }
string Uint16_str(Uint16 x) {
    char *buffer = CARP_MALLOC(64);
    snprintf(buffer, 64, "Uint16(%hu)", x);
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
Uint32 Uint32__LT__LT_(Uint32 x, Uint32 y) { return x << y; }
Uint32 Uint32__GT__GT_(Uint32 x, Uint32 y) { return x >> y; }
Uint32 Uint32_bor(Uint32 x, Uint32 y) { return x | y; }
Uint32 Uint32_band(Uint32 x, Uint32 y) { return x & y; }
Uint32 Uint32_bnot(Uint32 x) { return ~x; }
Uint32 Uint32_bxor(Uint32 x, Uint32 y) { return x ^ y; }
string Uint32_str(Uint32 x) {
    char *buffer = CARP_MALLOC(64);
    snprintf(buffer, 64, "Uint32(%u)", x);
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
Uint64 Uint64__LT__LT_(Uint64 x, Uint64 y) { return x << y; }
Uint64 Uint64__GT__GT_(Uint64 x, Uint64 y) { return x >> y; }
Uint64 Uint64_bor(Uint64 x, Uint64 y) { return x | y; }
Uint64 Uint64_band(Uint64 x, Uint64 y) { return x & y; }
Uint64 Uint64_bnot(Uint64 x) { return ~x; }
Uint64 Uint64_bxor(Uint64 x, Uint64 y) { return x ^ y; }
string Uint64_str(Uint64 x) {
    char *buffer = CARP_MALLOC(64);
    snprintf(buffer, 64, "Uint64(%llu)", x);
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
Int8 Int8__LT__LT_(Int8 x, Int8 y) { return x << y; }
Int8 Int8__GT__GT_(Int8 x, Int8 y) { return x >> y; }
Int8 Int8_bor(Int8 x, Int8 y) { return x | y; }
Int8 Int8_band(Int8 x, Int8 y) { return x & y; }
Int8 Int8_bnot(Int8 x) { return ~x; }
Int8 Int8_bxor(Int8 x, Int8 y) { return x ^ y; }
string Int8_str(Int8 x) {
    char *buffer = CARP_MALLOC(64);
    snprintf(buffer, 64, "Int8(%hhd)", x);
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
Int16 Int16__LT__LT_(Int16 x, Int16 y) { return x << y; }
Int16 Int16__GT__GT_(Int16 x, Int16 y) { return x >> y; }
Int16 Int16_bor(Int16 x, Int16 y) { return x | y; }
Int16 Int16_band(Int16 x, Int16 y) { return x & y; }
Int16 Int16_bnot(Int16 x) { return ~x; }
Int16 Int16_bxor(Int16 x, Int16 y) { return x ^ y; }
string Int16_str(Int16 x) {
    char *buffer = CARP_MALLOC(64);
    snprintf(buffer, 64, "Int16(%hd)", x);
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
Int32 Int32__LT__LT_(Int32 x, Int32 y) { return x << y; }
Int32 Int32__GT__GT_(Int32 x, Int32 y) { return x >> y; }
Int32 Int32_bor(Int32 x, Int32 y) { return x | y; }
Int32 Int32_band(Int32 x, Int32 y) { return x & y; }
Int32 Int32_bnot(Int32 x) { return ~x; }
Int32 Int32_bxor(Int32 x, Int32 y) { return x ^ y; }
string Int32_str(Int32 x) {
    char *buffer = CARP_MALLOC(64);
    snprintf(buffer, 64, "Int32(%d)", x);
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
Int64 Int64__LT__LT_(Int64 x, Int64 y) { return x << y; }
Int64 Int64__GT__GT_(Int64 x, Int64 y) { return x >> y; }
Int64 Int64_bor(Int64 x, Int64 y) { return x | y; }
Int64 Int64_band(Int64 x, Int64 y) { return x & y; }
Int64 Int64_bnot(Int64 x) { return ~x; }
Int64 Int64_bxor(Int64 x, Int64 y) { return x ^ y; }
string Int64_str(Int64 x) {
    char *buffer = CARP_MALLOC(64);
    snprintf(buffer, 64, "Int64(%lld)", x);
    return buffer;
}
Int64 Int64_from_MINUS_long(long x) {
  return (Int64) x;
}
long Int64_to_MINUS_long(Int64 x) {
  return (long) x;
}

