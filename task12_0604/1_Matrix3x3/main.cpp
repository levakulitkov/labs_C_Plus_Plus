//Кулитков Л.Е. РИ-280017
#include <iostream>
#include "Matrix3x3.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "ru");

    int minVal, maxVal, iRow, iCol;
    cout << "начало диапазона: "; cin >> minVal;
    cout << "конец диапазона: "; cin >> maxVal;
    Matrix3x3 M;
    M.fillRandomElements(minVal, maxVal);

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << M.element(i, j) << "\t";
        }
        cout << "\n";
    }

    cout << "сумма элементов главной диагонали " << M.sumPrincipalDiag() << endl;
    cout << "сумма элементов побочной диагонали " << M.sumSecondaryDiag() << endl;
    cout << "произведение элементов главной диагонали " << M.productPrincipalDiag() << endl;
    cout << "произведение элементов побочной диагонали " << M.productSecondaryDiag() << endl;
    cout << "сумма элементов в строке №"; cin >> iRow;
    cout << "равна " << M.sumRow(iRow - 1) << endl;
    cout << "минимальный элемент в столбце №"; cin >> iCol;
    cout << "равен " << M.minColumn(iCol - 1) << endl;
    cout << "максимальный элемент в столбце №"; cin >> iCol;
    cout << "равен " << M.maxColumn(iCol - 1) << endl;
}
