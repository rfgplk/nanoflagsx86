<h1>nanoflagsx86</h1>
<h2>Nanoscopic CPUID library</h2>

This is a (truly) tiny C library for detecting CPU features in 675 sloc.
The simplest possible drop-in replacement for any other cpuid reading library.

Absolutely no dependencies, except the following, which your system must provide:
```
<unistd.h>
<sched.h>
<sys/types.h>
```


... otherwise all code was written from scratch, and is directly provided under `src/`. 


This will detect features on pretty much all x86 cpu's, but as of now it's still missing naming support for more modern >2020 cores, which I'll get around to adding eventually.


Compliant with C99. 



## Usage
```
#include "src/x86.h"

int
main(void) {
    processor_t cpu;
    info(&cpu); // for general processor features
    spec(&cpu); // for per unit spec, such as cache features
    // that's it
    printf("Family: %d\n", cpu.family);
    printf("SSE: %d\n", cpu.features.sse);
    printf("SSE2: %d\n", cpu.features.sse2); // and so on
    printf("Frequency: %lld\n", cpu.core[0].freq); // can iterate per core, every core is treated as an ind. unit
}
```
