
#include <stdint.h>
#include "../testing.h"

#include "add.h"

TEST_FUNC_BEGIN("add_test")
{
  if (1 + 1 == add_u8(1, 1))
  {
    TEST_PASS("simple-add_u8");
  }
  else
  {
    TEST_FAIL("simple-add_u8");
  }

  if (1 + 1 == add_u16(1, 1))
  {
    TEST_PASS("simple-add_u16");
  }
  else
  {
    TEST_FAIL("simple-add_u16");
  }

  if (1 + 1 == add_u32(1, 1))
  {
    TEST_PASS("simple-add_u32");
  }
  else
  {
    TEST_FAIL("simple-add_u32");
  }

  if (1 + 1 == add_u64(1, 1))
  {
    TEST_PASS("simple-add_u64");
  }
  else
  {
    TEST_FAIL("simple-add_u64");
  }
}
TEST_FUNC_END("add_test")
