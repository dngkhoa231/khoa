#include <iostream>
using namespace std;
int** nhan_ma_tran(int** matran1, int m1, int n1, int** matran2, int m2, int n2) {
  // Kiểm tra tính hợp lệ của phép nhân
  if (n1 != m2) {
    cout << "Khong the nhan hai ma tran nay!" << endl;
    return nullptr;
  }
  // Tạo ma trận mới để lưu trữ kết quả
  int** ket_qua = new int*[m1];
  for (int i = 0; i < m1; i++) {
    ket_qua[i] = new int[n2];
  }

  // Duyệt qua từng phần tử của ma trận kết quả
  for (int i = 0; i < m1; i++) {
    for (int j = 0; j < n2; j++) {
      ket_qua[i][j] = 0;
      // Tính toán từng phần tử
      for (int k = 0; k < n1; k++) {
        ket_qua[i][j] += matran1[i][k] * matran2[k][j];
      }
    }
  }
  // Trả về ma trận kết quả
  return ket_qua;
}
int main() {
  // Nhập số hàng và số cột của ma trận 1
  int m1, n1;
  cout << "Nhap so hang cua ma tran 1: ";
  cin >> m1;
  cout << "Nhap so cot cua ma tran 1: ";
  cin >> n1;
  // Nhập các phần tử của ma trận 1
  int** matran1 = new int*[m1];
  for (int i = 0; i < m1; i++) {
    matran1[i] = new int[n1];
  }
  for (int i = 0; i < m1; i++) {
    for (int j = 0; j < n1; j++) {
      cout << "Nhap matran1[" << i << "][" << j << "]: ";
      cin >> matran1[i][j];
    }
  }
  // Nhập số hàng và số cột của ma trận 2
  int m2, n2;
  cout << "Nhap so hang cua ma tran 2: ";
  cin >> m2;
  cout << "Nhap so cot cua ma tran 2: ";
  cin >> n2;

  // Nhập các phần tử của ma trận 2
  int** matran2 = new int*[m2];
  for (int i = 0; i < m2; i++) {
    matran2[i] = new int[n2];
  }
  for (int i = 0; i < m2; i++) {
    for (int j = 0; j < n2; j++) {
      cout << "Nhap matran2[" << i << "][" << j << "]: ";
      cin >> matran2[i][j];
    }
  }
  // Nhân hai ma trận
  int** ket_qua = nhan_ma_tran(matran1, m1, n1, matran2, m2, n2);
  // Xuất ma trận kết quả
  if (ket_qua != nullptr) {
    cout << "Ma tran ket qua:" << endl;
    for (int i = 0; i < m1; i++) {
      for (int j = 0; j < n2; j++) {
        cout << ket_qua[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
