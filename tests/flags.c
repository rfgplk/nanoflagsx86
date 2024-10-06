#include "../src/x86.h"

#include <stdio.h>

int
main(void)
{
  processor_t your_cpu;
  info(&your_cpu);
  printf("Family: %d\n", your_cpu.family);
  printf("Model: %d\n", your_cpu.model);
  printf("Stepping: %d\n", your_cpu.stepping);
  printf("Type: %d\n", your_cpu.type);
  printf("Extended Model: %d\n", your_cpu.emodel);
  printf("Extended Family: %d\n", your_cpu.efamily);
  printf("Vendor: %d\n", your_cpu.vendor);

  printf("Common CPU Feature Flags\n");

  printf("HyperThreading: %d\n", your_cpu.features.htt);
  printf("AMD 3dNow!: %d\n", your_cpu.features.amd_3dnow);
  printf("Syscall: %d\n", your_cpu.features.syscall);
  printf("Speculation Control: %d\n", your_cpu.features.spec_ctrl);
  printf("POPCNT: %d\n", your_cpu.features.popcnt);
  printf("SSE: %d\n", your_cpu.features.sse);
  printf("SSE2: %d\n", your_cpu.features.sse2);
  printf("SSE3: %d\n", your_cpu.features.sse3);
  printf("SSSE3: %d\n", your_cpu.features.ssse3);
  printf("SSE4.1: %d\n", your_cpu.features.sse4_1);
  printf("AVX: %d\n", your_cpu.features.avx);
  printf("AVX2: %d\n", your_cpu.features.avx2);
  printf("AVX512dq: %d\n", your_cpu.features.avx512dq);
  printf("AVX512vnni: %d\n", your_cpu.features.avx512vnni);
  printf("AVX512cd: %d\n", your_cpu.features.avx512cd);
  printf("AVX512f: %d\n", your_cpu.features.avx512f);

  return 0;
}
