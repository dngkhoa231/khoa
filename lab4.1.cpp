#include <iostream>
using namespace std;
int** chuyen_vi(int** matran, int m, int n) {
  // Tạo ma trận mới để lưu trữ ma trận chuyển vị
  int** mt_chuyen_vi = new int*[n];
  for (int i = 0; i < n; i++) {
    mt_chuyen_vi[i] = new int[m];
  }
  // Duyệt qua từng phần tử của ma trận ban đầu
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      // Gán giá trị cho ma trận chuyển vị
      mt_chuyen_vi[j][i] = matran[i][j];
    }
  }
  // Trả về ma trận chuyển vị
  return mt_chuyen_vi;
}
int main() {
  // Nhập số hàng và số cột của ma trận
  int m, n;
  cout << "Nhap so hang cua ma tran: ";
  cin >> m;
  cout << "Nhap so cot cua ma tran: ";
  cin >> n;
  // Nhập các phần tử của ma trận
  int** matran = new int*[m];
  for (int i = 0; i < m; i++) {
    matran[i] = new int[n];
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << "Nhap matran[" << i << "][" << j << "]: ";
      cin >> matran[i][j];
    }
  }
  // Tính ma trận chuyển vị
  int** mt_chuyen_vi = chuyen_vi(matran, m, n);
  // Xuất ma trận chuyển vị
  cout << "Ma tran chuyen vi:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << mt_chuyen_vi[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
