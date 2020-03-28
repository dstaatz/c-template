
#include <stdint.h>
#include "../testing.h"

#include "sub.h"

TEST_FUNC_BEGIN("sub_test")
{
  if (1 - 1 == sub_u8(1, 1))
  {
    TEST_PASS("simple-sub_u8");
  }
  else
  {
    TEST_FAIL("simple-sub_u8");
  }

  if (1 - 1 == sub_u16(1, 1))
  {
    TEST_PASS("simple-sub_u16");
  }
  else
  {
    TEST_FAIL("simple-sub_u16");
  }

  if (1 - 1 == sub_u32(1, 1))
  {
    TEST_PASS("simple-sub_u32");
  }
  else
  {
    TEST_FAIL("simple-sub_u32");
  }

  if (1 - 1 == sub_u64(1, 1))
  {
    TEST_PASS("simple-sub_u64");
  }
  else
  {
    TEST_FAIL("simple-sub_u64");
  }
}
TEST_FUNC_END("sub_test")
