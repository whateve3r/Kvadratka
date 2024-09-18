#include <math.h>
#include "comparison.h"
#include "consts.h"
#ifndef solver
#define solver
int UniversalSolver(double a, double b, double c, double* x1, double* x2);
int LinearSolver(double b, double c, double* x1);
int SolveSQ(double a, double b, double c, double* x1, double* x2);
#endif
