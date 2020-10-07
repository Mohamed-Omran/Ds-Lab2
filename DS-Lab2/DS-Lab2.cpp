// DS-Lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

template<typename T>
T minArr(T* A, int size) {
	T min = A[0];
	for (int i = 0; i < size; i++) {
		if (A[i] < min)
			min = A[i];
	}
	return min;
}
//////////////////////////////////////////
template <typename T>
class Matrix {
private:
	T A[5][7];
public:
	Matrix() {}
	Matrix(T x[5][7])
	{
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 7; j++) {
				A[i][j] = x[i][j];
			}
		}
		//A = x;
	}
	void AddValue(int row, int col, T val) {
		A[row][col] = val;
	}

	bool BelongTO(T val) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 7; j++) {
				if (A[i][j] == val)
					return 1;
			}
		}
		return 0;
	}

	void PrintRow(int i) {
		for (int k = 0; k < 7; j++)
			cout << A[i][k];
		cout << "\n";
	}
	void Print() {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 7; j++) {
				cout << A[i][j] << " ";
			}
			cout << endl;
		}

	}
	T MaxValue() {
		T max = A[0][0];
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 7; j++) {
				if (A[i][j] > max)
					max = A[i][j];
			}
		}
		return max;
	}
};



int main()
{
	//int n = 5;
	//int *A = new int[n] { 1, 23, 4,0, 6 };
	//double *A = new double[n] { 10.5502, 23.32, 4.02, 0.6, 6.3 };
	//char *A = new char[n] { 'a' , 's', 'S', 'A', 'x'};
	//string *A = new string[n] { "Mohamed", "Ahmed", "Kamel", "omran" ,"Ahmed" };
	//cout << minArr(A, n)<<"\n";
///////////////////////////////////////////////////////////////////// EX2/////////////////
	int x[5][7] = { { 1,2,34,5,7,5 },
	{ 10,22,34,5,7 },
	{ 1,2,344,5,7 },
	{ 1,2,34,65,87 },
	{ 1,-5,34,5,73 } };

	Matrix<int> A(x);
	A.AddValue(2, 4, 6);
	A.Print();

	return 0;
}

