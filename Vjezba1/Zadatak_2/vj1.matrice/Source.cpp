#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

 struct Matrix {
	int row;
	int col;
	float **data;
}mat,mat1,mat2,mat3,mat4,mat5;

void createMatrix(Matrix& mat,int m,int n) {
	mat.row = m;
	mat.col = n;
	mat.data = new float* [m];
	for (int i = 0; i < m; i++) {
		mat.data[i] = new float[n];
	}

};

void matrixInput(Matrix& mat) {
	for (int i = 0; i < mat.row; i++) {
		for (int j = 0; j < mat.col; j++) {
			cout << "Enter element for row " << i+1 << " col " << j+1 <<endl;
			cin >> mat.data[i][j];
		}
	}

};


void generateMatrix(Matrix& mat,int a,int b) {
	
	for (int i = 0; i < mat.row;i++) {
		for (int j = 0; j < mat.col;j++) {
			if (a <= b) {
				mat.data[i][j] = a;
				a++;
			}
		}
	}
};

void printMatrix(Matrix& mat) {
	for (int i = 0; i < mat.row; i++) {
		for (int j = 0; j < mat.col; j++) {
			cout <<right << setprecision(4) << fixed << mat.data[i][j] << " ";
		}
		cout << endl;
	}
	cout<<endl;
	
};

void matrixAddition(Matrix&mat, Matrix &mat1) {
	if (mat.row == mat1.row && mat1.col == mat.col) {
	    createMatrix(mat2, mat.row, mat.col);

		for (int i = 0; i < mat2.row; i++) {
			for (int j = 0; j < mat2.col; j++) {
				mat2.data[i][j] = mat.data[i][j]+ mat1.data[i][j];
			}
		}
	}
	else
	{
		cout << "Matrix's are not compatible!" << endl;
	}

	}
void matrixSub(Matrix& mat, Matrix& mat1) {
	if (mat.row == mat1.row && mat1.col == mat.col) {
		createMatrix(mat3, mat.row, mat.col);

		for (int i = 0; i < mat3.row; i++) {
			for (int j = 0; j < mat3.col; j++) {
				mat3.data[i][j] = mat.data[i][j] - mat1.data[i][j];
			}
		}
	}
	else
	{
		cout << "Matrix's are not compatible!" << endl;
	}
};
void matrixMultiplication(Matrix& mat, Matrix& mat1) {
	if (mat.row == mat1.row && mat1.col == mat.col) {
		createMatrix(mat4, mat.row, mat.col);

		for (int i = 0; i < mat4.row; i++) {
			for (int j = 0; j < mat4.col; j++) {
				mat4.data[i][j] = mat.data[i][j] * mat1.data[i][j];
			}
		}
	}
	else
	{
		cout << "Matrix's are not compatible!" << endl;
	}
};

void matrixT(Matrix& mat) {
	createMatrix(mat5, mat.row, mat.col);
	for (int i = 0; i < mat5.row; i++) {
		for (int j = 0; j < mat5.col ;j++) {
			mat5.data[j][i] = mat.data[i][j];
		}
	}
};

void deleteMatrix(Matrix &mat) {
	for (int i = 0; i < mat.row;i++) {
		delete[]mat.data[i];
	}
	delete[]mat.data;
};


int main() {
	int row, col,down,up;
	cout << "Input rows:\n" << endl;
	cin >> row;
	cout << "Input cols:\n" << endl;
	cin >> col;

	
	/*cout << "Input top range number" << endl;
	cin >> down;
	cout << "Input lower range number:" << endl;
	cin >> up;
	*/
	createMatrix(mat, row, col);
	createMatrix(mat1, row, col);

	//generateMatrix(mat,down,up);
	matrixInput(mat);
	matrixInput(mat1);

	matrixAddition(mat, mat1);
	matrixSub(mat, mat1);
	matrixMultiplication(mat, mat1);
	matrixT(mat);
	
	printMatrix(mat2);
	printMatrix(mat3);
	printMatrix(mat4);
	printMatrix(mat5);

	deleteMatrix(mat);
	deleteMatrix(mat1);
	deleteMatrix(mat2);
	deleteMatrix(mat3);
	deleteMatrix(mat4);
	deleteMatrix(mat5);



	return 0;
}