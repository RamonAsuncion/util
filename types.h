#ifndef _TYPES_H_
#define _TYPES_H_

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

// Basic Types
typedef float     f32;

// Fixed-width Types
typedef int8_t    i8;
typedef uint8_t   u8;
typedef int16_t   i16;
typedef uint16_t  u16;
typedef int32_t   i32;
typedef uint32_t  u32;
typedef int64_t   i64;
typedef uint64_t  u64;

// Platform-specific Types
typedef intptr_t  isize;
typedef uintptr_t usize;

#endif /* _TYPES_H_ */

