#include "softfloat.h"

#include <stdint.h>

int main ()
{
  float16_t a = ui32_to_f16(5);
  float16_t b = ui32_to_f16(2);

  float16_t c = f16_add(a, b);

  return 0;
}