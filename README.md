<div align="center">
  <img src="https://github.com/user-attachments/assets/2ca04cf2-ea54-4e36-a8b4-ea6ee533693b" alt="nanoflags_logo" width="300"/>
  
# nanoflagsx86
### 📚 Nanoscopic CPUID library
</div>


This is a (truly) tiny C library for detecting CPU features in 675 sloc.
The simplest possible drop-in replacement for any other cpuid reading library, in lieu of reading `/proc/cpuinfo`

Absolutely no dependencies, except the following, which your system must provide:
```cpp
<unistd.h>
<sched.h>
<sys/types.h>
```


... otherwise all code was written from scratch, and is directly provided under `src/`. 


This will detect features on pretty much all x86 cpu's, but as of now it's still missing naming support for more modern >2020 cores, which I'll get around to adding eventually.


Compliant with C99. 



## Usage
```cpp
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
