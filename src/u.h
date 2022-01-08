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
