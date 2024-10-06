#include <stdio.h>
#include "../src/x86.h"

int
main(void)
{
  printf("Maximum CPUID Leaf Supported: %d\n", maximum_leaf());

  processor_t your_cpu;
  spec(&your_cpu);
  printf("Frequency: %lld\n", your_cpu.core[0].freq);
  for ( int i = 0; i < 256; i++ ) {
    if ( your_cpu.core[i].type == CORE_TYPE_NONE )
      break;
    printf("#%d\n", i + 1);
    printf("Type: %d\n", your_cpu.core[i].type);
    for ( int j = 0; j < 5; j++ ) {
      printf("Cache Size: %ld\n", your_cpu.core[i].caches[j].size);
      printf("Cache Level: %d\n", your_cpu.core[i].caches[j].level);
      printf("Cache Type: %d\n", your_cpu.core[i].caches[j].type);
    }
  }
  return 0;
}
