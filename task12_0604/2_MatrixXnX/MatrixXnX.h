#ifndef MATRIXXNX_H
#define MATRIXXNX_H

class MatrixXnX {
public:
    //конструктор по-умолчанию, принимающий размерность матрицы iDim инициализирующий значени€ элементов равных нулю;
    MatrixXnX(const int iDim);
    //метод чтени€ элементов матрицы
    int element(const int i, const int j) const { return A[i][j]; }
    //метод записи в элементы матрицы
    void setElement(const int i, const int j, const int value) { A[i][j] = value; }
    //метод, заполн€ющий случайными значени€ми в диапазоне [minVal, maxVal) элементы матрицы;
    void fillRandomElements(const int minVal, const int maxVal);
    //метод, вычисл€ющий сумму элементов главной диагонали;
    int sumPrincipalDiag();
    //метод, вычисл€ющий сумму элементов побочной диагонали;
    int sumSecondaryDiag();
    //метод, вычисл€ющий произведение элементов главной диагонали;
    int productPrincipalDiag();
    //метод, вычисл€ющий произведение элементов побочной диагонали;
    int productSecondaryDiag();
    //метод, вычисл€ющий сумму элементов в строке iRow;
    int sumRow(const int iRow);
    //метод, const вычисл€ющий минимальный элемент в столбце iCol;
    int minColumn(const int iCol);
    //метод, вычисл€ющий максимальный элемент в столбце iCol;
    int maxColumn(const int iCol);
    //деструктор
    ~MatrixXnX();

private:
    int** A, i, j, min, max, result, N;
};

#endif
