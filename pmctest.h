#include <assert.h>
#include <stdint.h>
//#include "PMCTest.h"

#ifndef __pmctest
#define __pmctest

// maximum number of performance counters used
#define MAXCOUNTERS 8

#ifdef __cplusplus
extern "C" {
#endif
    extern int CounterTypesDesired[MAXCOUNTERS];// list of desired counter types
	int init_performance_counters();
	int stop_performance_counters();
	void read_performance_counters(uint64_t* cntrs); //pass in an array of size MAXCOUNTERS
#ifdef __cplusplus
}
#endif

#endif
