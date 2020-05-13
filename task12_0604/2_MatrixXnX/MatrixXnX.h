#ifndef MATRIXXNX_H
#define MATRIXXNX_H

class MatrixXnX {
public:
    //����������� ��-���������, ����������� ����������� ������� iDim ���������������� �������� ��������� ������ ����;
    MatrixXnX(const int iDim);
    //����� ������ ��������� �������
    int element(const int i, const int j) const { return A[i][j]; }
    //����� ������ � �������� �������
    void setElement(const int i, const int j, const int value) { A[i][j] = value; }
    //�����, ����������� ���������� ���������� � ��������� [minVal, maxVal) �������� �������;
    void fillRandomElements(const int minVal, const int maxVal);
    //�����, ����������� ����� ��������� ������� ���������;
    int sumPrincipalDiag();
    //�����, ����������� ����� ��������� �������� ���������;
    int sumSecondaryDiag();
    //�����, ����������� ������������ ��������� ������� ���������;
    int productPrincipalDiag();
    //�����, ����������� ������������ ��������� �������� ���������;
    int productSecondaryDiag();
    //�����, ����������� ����� ��������� � ������ iRow;
    int sumRow(const int iRow);
    //�����, const ����������� ����������� ������� � ������� iCol;
    int minColumn(const int iCol);
    //�����, ����������� ������������ ������� � ������� iCol;
    int maxColumn(const int iCol);
    //����������
    ~MatrixXnX();

private:
    int** A, i, j, min, max, result, N;
};

#endif
