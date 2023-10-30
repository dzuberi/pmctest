# pmctest
To get this to work:
1. `cd` to `DriverSrcLinux` and run `sudo ./install.sh` (you need root privileges to install the driver but not to call it
3. `cd` back and make a build directory with `mkdir build`
4. `cd build && cmake .. && cmake --build`
5. Import the code with `#include pmctest.h` in your C/C++ file and link `build/libpmctest.a` with your compiler of choice
6. Define an (or multiple) array(s) of ints of size MAXCOUNTERS named CounterTypesDesired in your .c/.cpp file with your desired counters
7. run `init_performance_counters()` before you want to read performance counters
8. run `read_performance_counters(your_array)` as many times as you would like
9. run `stop_performance_counters()` when you are done.
