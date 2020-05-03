#ifndef MATRIX3X3_H
#define MATRIX3X3_H

class Matrix3x3 {
public:
    //����������� ��-���������, ���������������� �������� ��������� ������ ����;
    Matrix3x3();
    //����� ������ ��������� �������
    int element(const int i, const int j) const { return A[i][j]; }
    //����� ������ � �������� �������
    void setElement(const int i, const int j, const int value) { A[i][j] = value; }
    //�����, ����������� ���������� ���������� � ��������� [minVal, maxVal) �������� �������;
    void fillRandomElements(const int minVal, const int maxVal);
    //�����, ����������� ����� ��������� ������� ���������;
    int sumPrincipalDiag() const { return A[0][0] + A[1][1] + A[2][2]; }
    //�����, ����������� ����� ��������� �������� ���������;
    int sumSecondaryDiag() const { return A[2][0] + A[1][1] + A[0][2]; }
    //�����, ����������� ������������ ��������� ������� ���������;
    int productPrincipalDiag() const { return A[0][0] * A[1][1] * A[2][2]; }
    //�����, ����������� ������������ ��������� �������� ���������;
    int productSecondaryDiag() const { return A[2][0] * A[1][1] * A[0][2]; }
    //�����, ����������� ����� ��������� � ������ iRow;
    int sumRow(const int iRow) const { return A[iRow][0] + A[iRow][1] + A[iRow][2]; }
    //�����, ����������� ����������� ������� � ������� iCol;
    int minColumn(const int iCol);
    //�����, ����������� ������������ ������� � ������� iCol;
    int maxColumn(const int iCol);

private:
    int i, j, A[3][3], min, max;
};

#endif
