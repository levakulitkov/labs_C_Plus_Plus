#ifndef MATRIX3X3_H
#define MATRIX3X3_H

class Matrix3x3 {
public:
    //конструктор по-умолчанию, инициализирующий значени€ элементов равных нулю;
    Matrix3x3();
    //метод чтени€ элементов матрицы
    int element(const int i, const int j) const { return A[i][j]; }
    //метод записи в элементы матрицы
    void setElement(const int i, const int j, const int value) { A[i][j] = value; }
    //метод, заполн€ющий случайными значени€ми в диапазоне [minVal, maxVal) элементы матрицы;
    void fillRandomElements(const int minVal, const int maxVal);
    //метод, вычисл€ющий сумму элементов главной диагонали;
    int sumPrincipalDiag() const { return A[0][0] + A[1][1] + A[2][2]; }
    //метод, вычисл€ющий сумму элементов побочной диагонали;
    int sumSecondaryDiag() const { return A[2][0] + A[1][1] + A[0][2]; }
    //метод, вычисл€ющий произведение элементов главной диагонали;
    int productPrincipalDiag() const { return A[0][0] * A[1][1] * A[2][2]; }
    //метод, вычисл€ющий произведение элементов побочной диагонали;
    int productSecondaryDiag() const { return A[2][0] * A[1][1] * A[0][2]; }
    //метод, вычисл€ющий сумму элементов в строке iRow;
    int sumRow(const int iRow) const { return A[iRow][0] + A[iRow][1] + A[iRow][2]; }
    //метод, вычисл€ющий минимальный элемент в столбце iCol;
    int minColumn(const int iCol);
    //метод, вычисл€ющий максимальный элемент в столбце iCol;
    int maxColumn(const int iCol);

private:
    int i, j, A[3][3], min, max;
};

#endif
