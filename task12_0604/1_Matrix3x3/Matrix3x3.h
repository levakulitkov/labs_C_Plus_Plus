#ifndef MATRIX3X3_H
#define MATRIX3X3_H

class Matrix3x3 {
public:
    //êîíñòðóêòîð ïî-óìîë÷àíèþ, èíèöèàëèçèðóþùèé çíà÷åíèÿ ýëåìåíòîâ ðàâíûõ íóëþ;
    Matrix3x3();
    //ìåòîä ÷òåíèÿ ýëåìåíòîâ ìàòðèöû
    int element(const int i, const int j) const { return A[i][j]; }
    //ìåòîä çàïèñè â ýëåìåíòû ìàòðèöû
    void setElement(const int i, const int j, const int value) { A[i][j] = value; }
    //ìåòîä, çàïîëíÿþùèé ñëó÷àéíûìè çíà÷åíèÿìè â äèàïàçîíå [minVal, maxVal) ýëåìåíòû ìàòðèöû;
    void fillRandomElements(const int minVal, const int maxVal);
    //ìåòîä, âû÷èñëÿþùèé ñóììó ýëåìåíòîâ ãëàâíîé äèàãîíàëè;
    int sumPrincipalDiag() const { return A[0][0] + A[1][1] + A[2][2]; }
    //ìåòîä, âû÷èñëÿþùèé ñóììó ýëåìåíòîâ ïîáî÷íîé äèàãîíàëè;
    int sumSecondaryDiag() const { return A[2][0] + A[1][1] + A[0][2]; }
    //ìåòîä, âû÷èñëÿþùèé ïðîèçâåäåíèå ýëåìåíòîâ ãëàâíîé äèàãîíàëè;
    int productPrincipalDiag() const { return A[0][0] * A[1][1] * A[2][2]; }
    //ìåòîä, âû÷èñëÿþùèé ïðîèçâåäåíèå ýëåìåíòîâ ïîáî÷íîé äèàãîíàëè;
    int productSecondaryDiag() const { return A[2][0] * A[1][1] * A[0][2]; }
    //ìåòîä, âû÷èñëÿþùèé ñóììó ýëåìåíòîâ â ñòðîêå iRow;
    int sumRow(const int iRow) const { return A[iRow][0] + A[iRow][1] + A[iRow][2]; }
    //ìåòîä, âû÷èñëÿþùèé ìèíèìàëüíûé ýëåìåíò â ñòîëáöå iCol;
    int minColumn(const int iCol);
    //ìåòîä, âû÷èñëÿþùèé ìàêñèìàëüíûé ýëåìåíò â ñòîëáöå iCol;
    int maxColumn(const int iCol);

private:
    int iDim = 3, i, j, A[3][3], min, max;
};

#endif
