#ifndef consts
#define consts
struct ProgramCheck
{
    int NumTest;
    double a, b, c;
    int RootTest;
    double x1_test, x2_test;
};
enum Roots
{
    NoRoots = 0,
    OneRoot = 1,
    TwoRoots = 2,
    InfiniteRoots = -1
};
enum Errors
{
    ok = 8,
    Error = 1
};
const double epsilon = 1e-6;

enum IsZero
{
    IsZero = 1,
    IsntZero = 0
};
#endif
