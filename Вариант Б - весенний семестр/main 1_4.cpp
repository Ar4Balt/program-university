//��������� ������ ��������� 0) (f(x) �� �������[a; b] � ��������� (�������) = 10�6,
//��������� �������� �����(� = 1 � ����� ����������� �������, � = 2 � �����
//�����������, � = 3 � ����� ����) ��� �������� �������.���������� ����� ���� -
//����� �������� � ���� ������� � �������������� ����������, ��������� a, b,
//(�������), s � � ���� ���������� �� ���������.
//��������� ����������� � ���� �������(s � �������� ���������, � � ����� -
//������ ������ ���������, f(x) � �������� ������� � ��������� ����� �, k_iter � �� -
//�������� �������� ����� ��� ��������� ����� � �������� ���������) :

//�) f(x) = (x + 1)^2 - 5 ---a = 0; b = 2;
//�) f(x) = x^2 - e^x - 1,5s ---a = �1, 5; b = 1; s(�����������)[0, 9; 1, 1], (������)s = 0, 05; M = 3.
//
//#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//double func(double x)
//{
//	return pow(x, 3) - 2 * pow(x, 2) - 6 * x - 1;
//}
//
//double find(double infinum, double supremum, double epsilon)
//{
//	while (fabs(supremum - infinum) > epsilon)
//	{
//		infinum = supremum - (supremum - infinum) * func(supremum) / (func(
//			supremum) - func(infinum));
//		supremum = infinum - (infinum - supremum) * func(infinum) / (func(
//			infinum) - func(supremum));
//	}
//	cout << supremum;
//	return supremum;
//}
//
//double plan_a(int x)
//{
//	fixed; setprecision(6);			//����� ��������
//	pow(x, 3) / 3 + pow(x, 2) + 4 * x;
//
//	double num(5e-6);
//	num = pow(x, 3) / 3 + pow(x, 2) + 4 * x;
//
//	return num;
//}
//
//void plan_A(int a, int b, long double& F)
//{
//	F = plan_a(b) - plan_a(a);
//}
//
//void plan_b(int x)
//{
//	//fixed; setprecision(6);			//����� ��������
//	//cout << fixed << setprecision(6) << pow(x, 3) / 3 + pow(x, 2) + 4 * x;
//	double num = 1e-6;
//	num = pow(x, 3) / 3 + pow(x, 2) + 4 * x;
//
//	//num = stod(fun);
//	cout << endl << num << endl;
//
//	cout << endl << fixed << setprecision(6) << num;
//}
//
//int main_1_4()
//{
//	int x = 2,
//		a = 0,
//		b = 2;
//	long double F = 1e-6;
//
//	//plan_A(a, b, F);
//	plan_b(x);
//	find(a, b, 0.001);
//
//	//cout << F;
//
//	return 0;
//}