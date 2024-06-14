#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdint.h>   /* IWYU pragma: export */
#include <inttypes.h> /* IWYU pragma: export */
#include <limits.h>   /* IWYU pragma: export */
#include <string.h>   /* IWYU pragma: export */

// get index of pointer within array by byte offset calculation.
#define ARR_PTR_IDX(_p, _arr) (((char *)_p) - (_arr))

// determine the length of a compile-time known array.
#define ARR_LEN(_arr) (sizeof(_arr) / sizeof((_arr)[0]))

// calculate the size of some structure member
#define FIELD_SIZEOF(_t, _f) (sizeof(((_t*)0)->_f))

// basic Types
typedef float     f32;
typedef double    f64;
typedef unsigned int uint;

// fixed-width Types
typedef int8_t    i8;
typedef uint8_t   u8;
typedef int16_t   i16;
typedef uint16_t  u16;
typedef int32_t   i32;
typedef uint32_t  u32;
typedef int64_t   i64;
typedef uint64_t  u64;

// platform-specific Types
typedef intptr_t  isize;
typedef uintptr_t usize;

#endif /* _TYPES_H_ */

