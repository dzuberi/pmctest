#include <assert.h>
//#include "PMCTest.h"

#ifndef __pmctest
#define __pmctest

// maximum number of performance counters used
#define MAXCOUNTERS 8

#ifdef __cplusplus
extern "C" {
#endif
    extern int CounterTypesDesired[MAXCOUNTERS];// list of desired counter types
	int init_performance_counters(int* cntrs, int num);
	int stop_performance_counters(int* cntrs, int num);
	int* read_performance_counters(int* cntrs, int num);
#ifdef __cplusplus
}
#endif

#endif
