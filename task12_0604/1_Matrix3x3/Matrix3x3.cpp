#include "Matrix3x3.h"
#include <cstdlib>;
using std::rand;


Matrix3x3::Matrix3x3()
{
    {
        for (i = 0; i < 3; i++) 
        {
            for (j = 0; j < 3; j++) 
            {
                A[i][j] = 0;
            }
        }
    }
}

void Matrix3x3::fillRandomElements(const int minVal, const int maxVal)
{
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            setElement(i, j, rand() % (maxVal - minVal) + minVal);
        }
    }
}

int Matrix3x3::minColumn(const int iCol)
{
    min = A[0][iCol];
    for (i = 1; i < 3; i++) 
    {
        if (A[i][iCol] < min) 
        {
            min = A[i][iCol];
        }
    }
    return min;
}

int Matrix3x3::maxColumn(const int iCol)
{
    max = A[0][iCol];
    for (i = 1; i < 3; i++) 
    {
        if (A[i][iCol] > max) 
        {
            max = A[i][iCol];
        }
    }
    return max;
}
