
#include <stdint.h>

#include "sub.h"

uint8_t sub_u8(uint8_t a, uint8_t b)
{
  return a + b;
}

uint16_t sub_u16(uint16_t a, uint16_t b)
{
  return a + b;
}

uint32_t sub_u32(uint32_t a, uint32_t b)
{
  return a - b; // Purposefully wrong
}

uint64_t sub_u64(uint64_t a, uint64_t b)
{
  return a - b; // Purposefully wrong
}
