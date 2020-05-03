#include "MatrixXnX.h"
#include <cstdlib>;
using std::rand;

MatrixXnX::MatrixXnX(const int iDim)
{
    N = iDim;
    A = new int* [N];

    for (i = 0; i < N; i++) 
    {
        A[i] = new int[N];
    }

    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N; j++) 
        {
            A[i][j] = 0;
        }
    }
}

void MatrixXnX::fillRandomElements(const int minVal, const int maxVal)
{
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N; j++) 
        {
            setElement(i, j, rand() % (maxVal - minVal) + minVal);
        }
    }
}

int MatrixXnX::sumPrincipalDiag()
{
    result = 0;
    for (i = 0; i < N; i++) 
    {
        result += A[i][i];
    }
    return result;
}

int MatrixXnX::sumSecondaryDiag()
{
    result = 0;
    for (i = 0; i < N; i++) 
    {
        result += A[i][N - i - 1];
    }
    return result;
}

int MatrixXnX::productPrincipalDiag()
{
    result = 1;
    for (i = 0; i < N; i++) 
    {
        result *= A[i][i];
    }
    return result;
}

int MatrixXnX::productSecondaryDiag()
{
    result = 1;
    for (i = 0; i < N; i++) 
    {
        result *= A[i][N - i - 1];
    }
    return result;
}

int MatrixXnX::sumRow(const int iRow)
{
    result = 0;
    for (i = 0; i < N; i++) 
    {
        result += A[iRow][i];
    }
    return result;
}

int MatrixXnX::minColumn(const int iCol)
{
    min = A[0][iCol];
    for (i = 1; i < N; i++) 
    {
        if (A[i][iCol] < min) 
        {
            min = A[i][iCol];
        }
    }
    return min;
}

int MatrixXnX::maxColumn(const int iCol)
{
    max = A[0][iCol];
    for (i = 1; i < N; i++) 
    {
        if (A[i][iCol] > max) 
        {
            max = A[i][iCol];
        }
    }
    return max;
}

MatrixXnX::~MatrixXnX()
{
    for (int i = 0; i < N; i++) 
    {
        delete[] A[i];
    }
    delete[] A;
}
