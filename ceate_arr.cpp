#include<iostream>
using namespace std;

/* 
	创建二维数组
*/

int main() {

	// 已知大小
	int arr_1[2][3] = { {1, 2, 3}, {4, 5, 6} };

	// 未知大小
	//    创建
	int m = 2, n = 3;
	int** arr_2 = new int*[m];
	for (int i = 0; i < m; i++) {
		arr_2[i] = new int[n];
	}
	//    删除
	for (int i = 0; i < m; i++) {
		delete[] arr_2[i];
	}
	delete[] arr_2;

	return 1;
}