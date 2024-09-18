#include "runtest.h"
void ProgramTest(ProgramCheck test)
{
    double x1 = 0, x2 = 0;

    int NumRoots = UniversalSolver(test.a, test.b, test.c, &x1, &x2);

    if (comparison(NumRoots, test.RootTest) == IsntZero
        || comparison(minimum(x1, x2), minimum(test.x1_test, test.x2_test)) == IsntZero
        || comparison(maximum(x1, x2), maximum(test.x1_test, test.x2_test)) == IsntZero)
    {
        switch(NumRoots)
        {
            case NoRoots:       printf("Error. Test #%d. Expected: no roots.\n", test.NumTest);
                                break;

            case OneRoot:       printf("Error. Test #%d. Expected: x1 - %lg, quantity - %d\n", test.NumTest, x1, NumRoots);
                                break;

            case TwoRoots:      printf("Error. Test #%d. Expected: x1 - %lg, x2 - %lg, quantity - %d\n", test.NumTest, x1, x2, NumRoots);
                                break;

            case InfiniteRoots: printf("Error. Test #%d. Expected: infinite roots.\n", test.NumTest);
                                break;

            default:            printf("ProgramTest(): Error.\n");
        }
    }

    else
    {
        printf("Test #%d completed successfully.\n", test.NumTest);
    }
}



void RunTests()
{
    ProgramCheck Tests[7] = {
                              {1,1,-7,12,2,3,4},
                              {2,0,5,-10,1,2},
                              {3,1,0,-25,2,5,-5},
                              {4,0,0,0,NoRoots},
                              {5,1,10,24,2,-6,-4},
                              {6,1,2,0,2,-2,0},
                              {7,0.9,-0.1,0,2,0.111111,0}
                            };

    size_t Size = sizeof(Tests) / sizeof(Tests[0]);

    for (size_t i = 0; i < Size; i++)
    {
        ProgramTest(Tests[i]);
    }
}
