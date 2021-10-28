#include "LinearApproximation.h"

LinearApproximation::LinearApproximation(const int& size) {
    xAr.resize(size);
    yAr.resize(size);
    /***
    *  xAr = { 39.6, 9.3, 14.2, 12.2, 14.6, 42.6, 1.4, 2.9, 13.6, 1.5 };
    * yAr = { 0.7, 3.2, 6.4, 5.6, 6.4, 7.2, 7.9, 5.0, 6.5, 0.5 };
    *  �������� � ���� ������� ��� �������
    * ���� ������� �� ���������� ��� ����� ������� �� ����������� ��� ����� ����
    * � ����� ��������� ���� ����  �� ��������
    * ��� ����� ��� ���������� ������ � ���������
    */
    cout << "Fill array with X coordinates:\n";
    for (int i = 0; i < size; i++) {
        cin >> xAr[i];
    }
    cout << "Fill array with Y coordinates:\n";
    for (int i = 0; i < size; i++) {
        cin >> yAr[i];
    }
}
void LinearApproximation::getArrayofPoints(const int& size) {
    cout << "X array of points: \n";
    for (int i = 0; i < size; i++) {
        cout << xAr.at(i) << " ";
    }
    cout << "\n\nY array of points: \n";
    for (int i = 0; i < size; i++) {
        cout << yAr.at(i) << " ";
    }
    cout << "\n\n";
}
void LinearApproximation::getIntermediateSums(const int& size) {
    computePowSumX(size);
    computeSumMulXY(size);
    computeSumPowX(size);
    computeSumX(size);
    computeSumY(size);

    cout << "Sum x: " << fixed << setprecision(3) << getSumX() << "\n";
    cout << "Sum y: " << fixed << setprecision(3) << getSumY() << "\n";
    cout << "Sum x * y: " << fixed << setprecision(3) << getSumMulXY() << "\n";
    cout << "Sum of squares x: " << fixed << setprecision(3) << getSumPowX() << "\n";
    cout << "Square of sum x: " << fixed << setprecision(3) << getPowSumX() << "\n";
}
void LinearApproximation::findOutCoeffitients(int& size) {
    double tempK = ((size * getSumMulXY()) - (getSumX() * getSumY())) / ((size * getSumPowX() - getPowSumX()));
    double tempB = (getSumY() - (tempK * getSumX())) / size;
    setK(tempK);
    setB(tempB);

    char sign = (getB() < 0) ? '-' : '+';
    string result;
    cout << "\n\nLinear Approximation:\n";
    result = "y= " + to_string(getK()) + "x " + sign + " " + to_string(fabs(getB()));
    cout << result << "\n";
}
void LinearApproximation::computeSumMulXY(const int& size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += (xAr.at(i) * yAr.at(i));
    }
    setSumMulXY(sum);
}
void LinearApproximation::computeSumX(const int& size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += xAr.at(i);
    }
    setSumX(sum);
}
void LinearApproximation::computeSumY(const int& size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += yAr.at(i);
    }
    setSumY(sum);
}
void LinearApproximation::computeSumPowX(const int& size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += pow(xAr.at(i), 2);
    }
    setSumPowX(sum);
}
void LinearApproximation::computePowSumX(const int& size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += xAr.at(i);
    }
    setPowSumX(pow(sum, 2));
}