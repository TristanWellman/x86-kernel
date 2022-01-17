
#ifndef U_H
#define U_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef char i8;
typedef short i16;
typedef int i32;

typedef signed int int32_t;

typedef long long i64;

typedef u32 size_t;
typedef u32 uintptr_t;

typedef float f32;
typedef double f64;

extern void panic(const char *);

#define _assert_0() __error_illegal_macro__
#define _assert_1(_e) do { if (!(_e)) panic(NULL); } while (0)
#define _assert_2(_e, _m) do { if (!(_e)) panic((_m)); } while (0)

#define _assert(x, _e, _m, _f, ...) _f

#define assert(...) _assert(,##__VA_ARGS__,\
        _assert_2(__VA_ARGS__),\
        _assert_1(__VA_ARGS__),\
        _assert_0(__VA_ARGS__))

#define asm __asm__ volatile

static inline void outPB(u16 port, u8 data) {
  asm("outb %1, %0" : : "dn" (port), "a" (data));
}

static inline void MEM_CPY(void *dst, const void *src, size_t n) {

  u8 *d = /*(unsigned char *)*/dst;
  const u8 *s = /*(const unsigned char *)*/src;

  while(n-- > 0) {

    *d++ = *s++;

  }

  return (void)d;

}

#endif
